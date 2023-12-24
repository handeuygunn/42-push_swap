/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:00:15 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 21:50:00 by huygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**p;
	t_list	**list;
	t_list	**b;

	list = (t_list **)malloc(sizeof(t_list));
	b = (t_list **)malloc(sizeof(t_list));
	if (argc < 2)
		error_code(list, b);
	else if (argc == 2)
	{
		p = ft_split(argv[1], ' ');
		ft_control_int(p, argc);
		ft_control_copy(p, argc);
		(*list) = ft_new_list(p, argc);
	}
	else
	{
		(*list) = ft_new_list(argv, argc);
		ft_control_int(argv, argc);
		ft_control_copy(argv, argc);
	}
	ft_control_list(list, b);
	sort_type(list, b);
	free_stack(list);
	free_stack(b);
}
