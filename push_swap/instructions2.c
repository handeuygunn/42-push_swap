/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:57:06 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 17:03:15 by huygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pb(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	write(1, "pb\n", 3);
	return (0);
}

void	ra(t_list **a, int x)
{
	t_list	*tmp;
	int		swap;

	tmp = *a;
	swap = (*a)->data;
	while ((*a)->next)
	{
		(*a)->data = (*a)->next->data;
		*a = (*a)->next;
	}
	(*a)->data = swap;
	*a = tmp;
	if (x == 0)
		write(1, "ra\n", 3);
}

void	rb(t_list **b, int x)
{
	t_list	*tmp;
	int		swap;

	tmp = *b;
	swap = (*b)->data;
	while ((*b)->next)
	{
		(*b)->data = (*b)->next->data;
		*b = (*b)->next;
	}
	(*b)->data = swap;
	*b = tmp;
	if (x == 0)
		write(1, "rb\n", 3);
}

void	rra(t_list **a, int x)
{
	int		swap;
	int		i;
	int		j;
	t_list	*tmp;

	tmp = *a;
	i = list_size(a);
	j = i + 1;
	while ((*a)->next)
		*a = (*a)->next;
	swap = (*a)->data;
	*a = tmp;
	while (--j > 0)
	{
		i = j - 1;
		*a = tmp;
		while (--i > 0)
			*a = (*a)->next;
		(*a)->next->data = (*a)->data;
	}
	*a = tmp;
	(*a)->data = swap;
	if (x == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_list **b, int x)
{
	int		swap;
	int		i;
	int		j;
	t_list	*tmp;

	tmp = *b;
	i = list_size(b);
	j = i + 1;
	while ((*b)->next)
		*b = (*b)->next;
	swap = (*b)->data;
	*b = tmp;
	while (--j > 0)
	{
		i = j - 1;
		*b = tmp;
		while (--i > 0)
			*b = (*b)->next;
		(*b)->next->data = (*b)->data;
	}
	*b = tmp;
	(*b)->data = swap;
	if (x == 0)
		write(1, "rrb\n", 4);
}
