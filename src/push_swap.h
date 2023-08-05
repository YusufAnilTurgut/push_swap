/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:59:39 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 17:00:10 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>

typedef struct s_data
{
	int		cnt;
	t_list	*top;
}	t_data;

int		ft_is_empty(t_data *a_data);
void	ft_stack_new(t_data *data);
void	push(t_data *data, int content);
void	ft_push_to(t_data *dst, t_data *src);
void	pa(t_data *a_data, t_data *b_data);
void	pb(t_data *b_data, t_data *a_data);
int		pop(t_data *data);
int		top(t_data *data);
void	ft_swap(t_data *data);
void	sa(t_data *a_data);
void	sb(t_data *b_data);
void	ss(t_data *a_data, t_data *b_data);
void	ft_rotate_stack(t_data *data);
void	ra(t_data *a_data);
void	rb(t_data *b_data);
void	rr(t_data *a_data, t_data *b_data);
void	ft_reverse_rotate_stack(t_data *data);
void	rra(t_data *a_data);
void	rrb(t_data *b_data);
void	rrr(t_data *a_data, t_data *b_data);
void	ft_get_elem(char **av, t_data *data);
int		*ft_sort_ar(int *ar, int len);
void	ft_indexing(t_data *d);
void	ft_radix(t_data *a, t_data *b);
void	ft_radix3(t_data *a_list, t_data *b_list);
void	ft_sort2(t_data *a_data, t_data *b_data, int len); //silinecek
void	ft_sort_triple(t_data *data);
void	ft_sort_fifth(t_data *a_data, t_data *b_data);
int		ft_check_true(char **av);
void	ft_put_error(void);
int		ft_check_duplicate(t_list *data);
int		ft_check_sorted(t_list *data);
int		ft_check_arg2(char *a);
int		ft_atoi2(const char *str);
int		ft_isalpha2(int c);
int		find_max(t_list *a_list);
int		find_min(t_list *a_list); 
int		ft_is_one(t_data *data, int j);
int		ft_is_zero(t_data *data, int j);

#endif
