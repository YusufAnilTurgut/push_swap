/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:40:04 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 16:52:44 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_data *data)
{
	int	tmp1;

	if (data -> cnt >= 2)
	{
		tmp1 = top(data);
		data->top->content = data->top->next->content;
		data->top->next->content = tmp1;
	}
}

void	sa(t_data *a_data)
{
	ft_swap(a_data);
	write(1, "sa\n", 3);
}

void	sb(t_data *b_data)
{
	ft_swap(b_data);
	write(1, "sb\n", 3);
}

void	ss(t_data *a_data, t_data *b_data)
{
	if ((ft_lstsize(a_data->top) < 2) || (ft_lstsize(b_data->top) < 2))
		return ;
	ft_swap(a_data);
	ft_swap(b_data);
	write(1, "ss\n", 3);
}
