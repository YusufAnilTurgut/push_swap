/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:24:55 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 16:58:04 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_put_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	ft_stack_new(t_data *data)
{
	data->cnt = 0;
	data->top = NULL;
}
