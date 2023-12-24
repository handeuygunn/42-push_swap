/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:56:47 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 17:02:55 by huygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_list **list)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *list;
	while (*list)
	{
		*list = (*list)->next;
		i++;
	}
	*list = tmp;
	return (i);
}

void	sa(t_list **a, int x)
{
	int	swap;

	if (list_size(a) < 2)
		return ;
	else
	{
		swap = (*a)->data;
		(*a)->data = (*a)->next->data;
		(*a)->next->data = swap;
	}
	if (x == 0)
		write(1, "sa\n", 3);
}

void	sb(t_list **b, int x)
{
	int	swap;

	if (list_size(b) < 2)
		return ;
	else
	{
		swap = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = swap;
	}
	if (x == 0)
		write(1, "sb\n", 3);
}

void	ft_push(t_list **from_list, t_list **to_list)
{
	t_list	*new_node;

	new_node = *from_list;
	(*from_list) = (*from_list)->next;
	new_node->next = (*to_list);
	(*to_list) = new_node;
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_b, stack_a);
	write(1, "pa\n", 3);
	return (0);
}
