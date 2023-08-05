/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:02:34 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 17:54:28 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_triple(t_data *data)
{
	if (ft_check_sorted(data->top) != 1)
	{
		if (find_max(data->top) == data->top->content)
		{
			ra(data);
			if (!ft_check_sorted(data->top))
				sa(data);
		}
		else if (find_min(data->top) == data->top->content)
		{
			rra(data);
			sa(data);
		}
		else if (find_min(data->top) == data->top->next->content)
			sa(data);
		else if (find_min(data->top) == data->top->next->next->content)
			rra(data);
	}
}

void	ft_sort_fifth_l(t_data *a_data, t_data *b_data)
{
	if (b_data->top->content < b_data->top->next->content)
		rb(b_data);
	ft_sort_triple(a_data);
	pa(a_data, b_data);
	ra(a_data);
	pa(a_data, b_data);
}

int	ft_pb_mx(t_data *a_data, t_data *b_data, int max)
{
	pb(b_data, a_data);
	max++;
	return (max);
}

int	ft_pb_mn(t_data *a_data, t_data *b_data, int mn)
{
	pb(b_data, a_data);
	mn++;
	return (mn);
}

void	ft_sort_fifth(t_data *a_data, t_data *b_data)
{
	int	i;
	int	max;
	int	min;

	i = 0;
	max = 0;
	min = 0;
	while (i < 5)
	{
		if (a_data->top->content == find_min(a_data->top) && max == 0)
			max = ft_pb_mx(a_data, b_data, max);
		else if (a_data->top->content == find_max(a_data->top) && min == 0)
			min = ft_pb_mn(a_data, b_data, min);
		else if (b_data->cnt == 2)
		{
			if (b_data->top->content < b_data->top->next->content)
				rr(a_data, b_data);
		}
		else if (max + min != 2)
			ra(a_data);
		i++;
	}
	ft_sort_fifth_l(a_data, b_data);
}
