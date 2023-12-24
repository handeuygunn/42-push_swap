/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:58:43 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 17:33:02 by huygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	*stack = NULL;
}

long	ft_get_min(t_list **list)
{
	t_list		*tmp;
	long long	min;

	tmp = *list;
	min = tmp->data;
	while (*list)
	{
		if ((*list)->data < min)
			min = (*list)->data;
		(*list) = (*list)->next;
	}
	*list = tmp;
	return (min);
}

long long	ft_max(t_list **stack_a)
{
	t_list	*tmp;
	int		max;

	tmp = *stack_a;
	max = (*stack_a)->data;
	while (*stack_a)
	{
		if ((*stack_a)->data > max)
			max = (*stack_a)->data;
		*stack_a = (*stack_a)->next;
	}
	*stack_a = tmp;
	return (max);
}

int	cost(t_list **list, int min)
{
	t_list	*tmp;
	int		distance;

	tmp = *list;
	distance = 0;
	while (*list)
	{
		if (min == (*list)->data)
			break ;
		distance++;
		*list = (*list)->next;
	}
	*list = tmp;
	return (distance);
}

void	for_three(t_list **list, t_list **b)
{
	sa(list, 0);
	ra(list, 0);
}
