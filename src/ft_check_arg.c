/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:52:33 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 16:42:57 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_true(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			if (ft_isalpha2(av[i][j]) == 1)
				ft_put_error();
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_isalpha2(int c)
{
	if ((c >= 58 && c <= 126) || (c >= 33 && c <= 42)
		|| (c == 44) || (c == 46) || (c == 47))
		return (1);
	return (0);
}

int	ft_check_duplicate(t_list *data)
{
	t_list	*tmp;

	while (data)
	{
		tmp = data->next;
		while (tmp)
		{
			if (data->content == tmp->content)
				ft_put_error();
			tmp = tmp->next;
		}
		data = data -> next;
	}
	return (1);
}

int	ft_check_sorted(t_list *data)
{
	int	i;

	i = data->content;
	while (data)
	{
		if (i > data->content)
			return (0);
		i = data->content;
		data = data->next;
	}
	return (1);
}
