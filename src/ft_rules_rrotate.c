/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_rrotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:11:12 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 16:52:14 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_stack(t_data *data)
{
	t_list	*tmp;
	t_list	*lasttmp;

	if (ft_lstsize(data->top) < 2)
		return ;
	tmp = data->top;
	lasttmp = ft_lstlast(data->top);
	while (tmp -> next -> next)
		tmp = tmp->next;
	tmp -> next = NULL;
	lasttmp -> next = data -> top;
	data -> top = lasttmp;
}

void	rra(t_data *a_data)
{
	ft_reverse_rotate_stack(a_data);
	write(1, "rra\n", 4);
}

void	rrb(t_data *b_data)
{
	ft_reverse_rotate_stack(b_data);
	write(1, "rrb\n", 4);
}

void	rrr(t_data *a_data, t_data *b_data)
{
	if ((ft_lstsize(a_data->top) < 2) || (ft_lstsize(b_data->top) < 2))
		return ;
	ft_reverse_rotate_stack(a_data);
	ft_reverse_rotate_stack(b_data);
	write(1, "rrr\n", 4);
}
