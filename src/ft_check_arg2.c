/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:03:09 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 16:43:37 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sign(int c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_digit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}

int	ft_space(int c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_check_arg2(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if (ft_sign(a[i]) == 1)
		{
			i++;
			if (!ft_isdigit(a[i]))
				return (0);
		}
		i++;
	}
	return (1);
}
