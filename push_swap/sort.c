/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:01:44 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 17:31:10 by huygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_elements(t_list **list)
{
	if ((*list)->data > (*list)->next->data)
		sa(list, 0);
}

void	three_elements(t_list **list, t_list **b)
{
	if (((*list)->data > (*list)->next->data)
		&& ((*list)->next->data < (*list)->next->next->data)
		&& ((*list)->data < (*list)->next->next->data))
		sa(list, 0);
	else if (((*list)->data < (*list)->next->data)
		&& ((*list)->next->data > (*list)->next->next->data)
		&& ((*list)->data > (*list)->next->next->data))
		rra(list, 0);
	else if (((*list)->data > (*list)->next->data)
		&& ((*list)->next->data > (*list)->next->next->data)
		&& ((*list)->data > (*list)->next->next->data))
	{
		sa(list, 0);
		rra(list, 0);
	}
	else if (((*list)->data > (*list)->next->data)
		&& ((*list)->next->data < (*list)->next->next->data)
		&& ((*list)->data > (*list)->next->next->data))
		ra(list, 0);
	else if (((*list)->data < (*list)->next->data)
		&& ((*list)->next->data > (*list)->next->next->data)
		&& ((*list)->data < (*list)->next->next->data))
		for_three(list, b);
}

void	four_elements(t_list **list, t_list **b)
{
	int	distance;

	distance = cost(list, ft_get_min(list));
	if (distance == 1)
		ra(list, 0);
	else if (distance == 2)
	{
		ra(list, 0);
		ra(list, 0);
	}
	else if (distance == 3)
		rra(list, 0);
	pb(list, b);
	three_elements(list, b);
	pa(list, b);
}

void	five_elements(t_list **list, t_list **b)
{
	int	distance;

	distance = cost(list, ft_get_min(list));
	if (distance == 1)
		ra(list, 0);
	else if (distance == 2)
	{
		ra(list, 0);
		ra(list, 0);
	}
	else if (distance == 3)
	{
		ra(list, 0);
		ra(list, 0);
		ra(list, 0);
	}
	else if (distance == 4)
		rra(list, 0);
	pb(list, b);
	four_elements(list, b);
	pa(list, b);
}

void	sort_type(t_list **list, t_list **b)
{
	int	i;
	int	min;

	i = list_size(list);
	min = ft_get_min(list);
	if (i == 2)
		two_elements(list);
	else if (i == 3)
		three_elements(list, b);
	else if (i == 4)
		four_elements(list, b);
	else if (i == 5)
		five_elements(list, b);
	else if (i > 5)
	{
		ft_offset(list, min);
		ft_radix(list, b);
		ft_deoffset(list, min);
	}
}
