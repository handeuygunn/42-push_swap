/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:58:24 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 17:17:49 by huygun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

long	ft_atoi(const char *str)
{
	long	i;
	long	number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}

void	ft_control_int(char **str, int a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (a > 2)
		i = 1;
	while (str[i])
	{
		j = 0;
		if (str[i][0] == '-' && ft_strlen(str[i]) > 1)
			j++;
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9'))
				error();
			j++;
		}
		i++;
	}
}

void	ft_control_copy(char **str, int a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (a > 2)
	{
		i = 1;
		j = 1;
	}
	while (str[i])
	{
		j = 0;
		while (str[j] != str[i])
		{
			if (ft_strcmp(str[i], str[j]) == 0)
				error();
			j++;
		}
		i++;
	}
}

void	error_code(t_list **list, t_list **b)
{
	free_stack(list);
	free_stack(b);
	exit(1);
}
