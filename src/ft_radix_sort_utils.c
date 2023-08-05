/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:14:58 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 17:25:26 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_one(t_data *data, int j)
{
	int		i;
	int		len;
	t_list	*tmp;

	tmp = data->top;
	len = data->cnt;
	i = 0;
	while (i < len)
	{
		if (((tmp->content >> j) & 1) == 0)
			return (1);
		tmp = tmp->next;
		i++;
	}
	free(tmp);
	return (0);
}

int	ft_is_zero(t_data *data, int j)
{
	int		i;
	int		len;
	t_list	*tmp;

	tmp = data->top;
	len = data->cnt;
	i = 0;
	while (i < len)
	{
		if (((tmp->content >> j) & 1) == 1)
			return (1);
		i++;
		tmp = tmp->next;
	}
	free(tmp);
	return (0);
}
