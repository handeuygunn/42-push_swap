/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:57:31 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 17:09:35 by huygun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_list **a, t_list **b)
{
	ra(a, 1);
	rb(b, 1);
	write(1, "rr\n", 3);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a, 1);
	rrb(b, 1);
	write(1, "rrr\n", 4);
}

void	ss(t_list**a, t_list **b)
{
	sa(a, 1);
	sb(b, 1);
	write(1, "ss\n", 3);
}
