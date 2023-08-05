/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:40:46 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 20:11:21 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix2(t_data *a, t_data *b, int j)
{
	int	len;
	int	i;

	i = 0;
	len = a->cnt;
	while (i < len)
	{
		if (a->top->content & (1 << j))
			ra(a);
		else
			pb(b, a);
		i++;
	}
	i = 0;
	while (b->cnt > 0)
	{
		pa(a, b);
	}
}

void	ft_radix(t_data *a, t_data *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 32)
	{
		if (ft_is_zero(a, j) == 0 || ft_is_one(a, j) == 0)
		{
			j++;
			continue ;
		}
		ft_radix2(a, b, j);
		j++;
	}
}

int	*ft_get_ar(t_list *tmp2, int *ar, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ar[i] = tmp2 -> content;
		i++;
		tmp2 = tmp2 -> next;
	}
	return (ar);
}

void	ft_indexing2(t_list *tmp2, int len, int *ar)
{
	int	i;

	while (tmp2)
	{
		i = 0;
		while (i < len)
		{
			if (tmp2 -> content == ar[i])
			{
				tmp2 -> content = i;
				break ;
			}
			i++;
		}
		tmp2 = tmp2 -> next;
	}
}

void	ft_indexing(t_data *d)
{
	int		len;
	int		i;
	int		j;
	int		*ar;
	t_list	*tmp2;

	j = 0;
	i = 0;
	len = d->cnt;
	tmp2 = d -> top;
	ar = malloc (sizeof(int) * len);
	ar = ft_get_ar(tmp2, ar, len);
	ft_sort_ar(ar, len);
	tmp2 = d -> top;
	ft_indexing2(tmp2, len, ar);
	free(ar);
}
