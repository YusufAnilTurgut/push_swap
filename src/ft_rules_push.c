/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:48:58 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 16:50:46 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_to(t_data *dst, t_data *src)
{
	if (src->cnt > 0)
	{
		push(dst, top(src));
		pop(src);
	}
}

void	pa(t_data *a_data, t_data *b_data)
{
	ft_push_to(a_data, b_data);
	write(1, "pa\n", 3);
}

void	pb(t_data *b_data, t_data *a_data)
{
	ft_push_to(b_data, a_data);
	write(1, "pb\n", 3);
}
