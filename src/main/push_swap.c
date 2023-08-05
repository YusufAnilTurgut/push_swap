/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:02:58 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/05 18:12:42 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ch_sort(t_data *a_data, t_data *b_data, int len)
{
	if (len == 3)
		ft_sort_triple(a_data);
	else if (len == 2)
		sa(a_data);
	else if (len == 5)
		ft_sort_fifth(a_data, b_data);
	else
		ft_radix(a_data, b_data);
}

int	main(int ac, char **av)
{
	int		len;
	t_data	*a_data;
	t_data	*b_data;

	if (ac < 2)
		return (0);
	a_data = (t_data *)malloc(sizeof(t_data *));
	b_data = (t_data *)malloc(sizeof(t_data *));
	ft_stack_new(a_data);
	ft_stack_new(b_data);
	ft_check_true(av);
	ft_get_elem(av, a_data);
	ft_check_duplicate(a_data->top);
	if (ft_check_sorted(a_data->top) == 1)
		return (0);
	len = a_data->cnt;
	ft_indexing(a_data);
	ft_ch_sort(a_data, b_data, len);
}
