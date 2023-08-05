/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:43:48 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 16:44:46 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_split_stack(char *av, t_data *data)
{
	int		k;
	char	**x;

	k = 0;
	x = ft_split(av, 32);
	while (x[k] != NULL)
		k++;
	k--;
	while (k >= 0)
	{
		if (ft_check_arg2(x[k]) == 1)
		{
			push(data, ft_atoi2(x[k]));
			k--;
		}
		else
			ft_put_error();
	}
}

void	ft_get_elem(char **av, t_data *data)
{
	int	i;

	i = 1;
	while (av[i] != NULL)
		i++;
	i--;
	while (i >= 1)
	{
		if (ft_strchr(av[i], 32))
			ft_split_stack(av[i], data);
		else
		{
			if (ft_check_arg2(av[i]) == 1)
			{
				push(data, ft_atoi2(av[i]));
			}
			else
				ft_put_error();
		}
		i--;
	}
}
