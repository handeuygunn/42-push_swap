/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huygun <huygun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:00:52 by huygun            #+#    #+#             */
/*   Updated: 2023/12/23 20:10:41 by huygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H 

# include <stdlib.h>
# include <unistd.h>

typedef struct p_list
{
	struct p_list	*next;
	long long		data;
}	t_list;

char		**ft_split(char const *s, char c);
long		ft_atoi(const char *str);
int			ft_strcmp(char *s1, char *s2);
void		ft_control_int(char **str, int a);
void		ft_control_copy(char **str, int a);
t_list		*ft_new_list(char **str, int a);
void		ft_control_list(t_list **list, t_list **b);
int			list_size(t_list **list);
void		sa(t_list **a, int x);
void		sb(t_list **b, int x);
void		ss(t_list **a, t_list **b);
int			pa(t_list **stack_b, t_list **stack_a);
void		sort_type(t_list **list, t_list **b);
int			pb(t_list **stack_a, t_list **stack_b);
void		ra(t_list **a, int x);
void		rb(t_list **b, int x);
void		rr(t_list **a, t_list **b);
void		rra(t_list **a, int x);
void		rrb(t_list **b, int x);
void		rrr(t_list **a, t_list **b);
void		two_elements(t_list **list);
void		three_elements(t_list **list, t_list **b);
void		four_elements(t_list **list, t_list **b);
void		five_elements(t_list **list, t_list **b);
void		ft_radix(t_list **stack_a, t_list **stack_b);
long		ft_max_bits(t_list **stack_a);
void		ft_offset(t_list **stack_a, int min);
void		ft_deoffset(t_list **stack_a, int min);
long		ft_get_min(t_list **stack_a);
void		free_stack(t_list **stack);
void		ft_push(t_list **from_list, t_list **to_list);
int			cost(t_list **list, int min);
long long	ft_max(t_list **stack_a);
void		error(void);
void		error_code(t_list **list, t_list **b);
void		ss(t_list**a, t_list **b);
int			ft_strlen(const char *s);
void		for_three(t_list **list, t_list **b);
#endif
