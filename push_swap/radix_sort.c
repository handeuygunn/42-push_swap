/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:01:21 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 17:14:44 by huygun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_max_bits(t_list **stack_a)
{
	t_list		*tmp;
	long long	max;
	long long	max_bit;
	long long	i;

	tmp = *stack_a;
	max = tmp->data;
	max_bit = 0;
	while (*stack_a)
	{
		if ((*stack_a)->data > max)
			max = (*stack_a)->data;
		(*stack_a) = (*stack_a)->next;
	}
	while (max >> max_bit != 0)
		max_bit++;
	*stack_a = tmp;
	return (max_bit);
}

void	ft_offset(t_list **stack_a, int min)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (min < 0)
	{
		while (*stack_a)
		{
			(*stack_a)->data = (*stack_a)->data - min;
			(*stack_a) = (*stack_a)->next;
		}
		*stack_a = tmp;
	}
}

void	ft_deoffset(t_list **stack_a, int min)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (*stack_a)
	{
		(*stack_a)->data = (*stack_a)->data + min;
		(*stack_a) = (*stack_a)->next;
	}
	*stack_a = tmp;
}

void	ft_radix_cont(t_list **stack_a, t_list **stack_b, long size, int i)
{
	int		j;
	t_list	*head_a;
	int		control;

	j = 0;
	control = 0;
	while (j < size)
	{
		head_a = *stack_a;
		if (((head_a->data >> i) & 1) == 1)
			ra(stack_a, 0);
		else
		{
			pb(stack_a, stack_b);
			control++;
		}
		j++;
	}
	while (control > 0)
	{
		pa(stack_a, stack_b);
		control--;
	}
}

void	ft_radix(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	long	i;
	long	j;
	long	size;
	long	max_bits;

	i = 0;
	size = list_size(stack_a);
	max_bits = ft_max_bits(stack_a);
	while (i < max_bits)
	{
		ft_radix_cont(stack_a, stack_b, size, i);
		i++;
	}
}
