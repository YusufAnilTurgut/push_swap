/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:01:41 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 16:51:44 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_stack(t_data *data)
{
	t_list	*tmp;

	if (ft_lstsize(data->top) < 2)
		return ;
	tmp = ft_lstlast(data->top);
	tmp -> next = data -> top;
	data -> top = data -> top -> next;
	tmp -> next -> next = NULL;
}

void	ra(t_data *a_data)
{
	ft_rotate_stack(a_data);
	write(1, "ra\n", 3);
}

void	rb(t_data *b_data)
{
	ft_rotate_stack(b_data);
	write(1, "rb\n", 3);
}

void	rr(t_data *a_data, t_data *b_data)
{
	if ((ft_lstsize(a_data->top) < 2) || (ft_lstsize(b_data->top) < 2))
		return ;
	ft_rotate_stack(a_data);
	ft_rotate_stack(b_data);
	write(1, "rr\n", 3);
}
