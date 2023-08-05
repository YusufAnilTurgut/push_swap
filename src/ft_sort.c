/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:44:26 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 17:54:17 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list *a_list)
{
	t_list	*tmp;
	int		min;

	tmp = a_list;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

int	find_max(t_list *a_list)
{
	t_list		*tmp;
	int			max;

	tmp = a_list;
	max = tmp->content;
	while (tmp)
	{
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	return (max);
}

void	ft_sort2(t_data *a_data, t_data *b_data, int len)
{
	while (a_data->cnt != 0)
	{
		while (a_data->top->content != find_min(a_data->top))
			ra(a_data);
		pb(b_data, a_data);
	}
	while (a_data->cnt < len) 
	{
		pa(a_data, b_data);
	}
}

int	*ft_sort_ar(int *ar, int len)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < len - 1)
	{
		if (ar[i] > ar[i + 1])
		{
			tmp = ar[i];
			ar[i] = ar[i + 1];
			ar[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return (ar);
}
