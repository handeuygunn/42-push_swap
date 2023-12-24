/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:56:28 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 17:02:23 by huygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

t_list	*ft_new_list(char **str, int a)
{
	int		i;
	t_list	*new_list;
	t_list	*tmp;

	i = 0;
	if (a > 2)
		i = 1;
	new_list = malloc(sizeof(t_list));
	tmp = new_list;
	while (str[i])
	{
		new_list->data = ft_atoi(str[i]);
		if (new_list->data < -2147483648 || new_list->data > 2147483647)
			error();
		if (str[i + 1])
		{
			new_list->next = malloc(sizeof(t_list));
			new_list = new_list->next;
		}
		i++;
	}
	new_list = NULL;
	new_list = tmp;
	return (new_list);
}

void	ft_control_list(t_list **list, t_list **b)
{
	int		i;
	int		control;
	t_list	*tmp;

	tmp = *list;
	i = 0;
	control = 0;
	while ((*list)->next)
	{
		if ((*list)->data < (*list)->next->data)
			control++;
		(*list) = (*list)->next;
		i++;
	}
	*list = tmp;
	if (control == i)
	{
		free_stack(list);
		free_stack(b);
		exit(0);
	}
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
