/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yturgut@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:54:50 by yturgut           #+#    #+#             */
/*   Updated: 2023/08/02 19:58:07 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_empty(t_data *a_data)
{
	if (a_data->cnt == 0)
		return (1);
	return (0);
}

void	push(t_data *data, int content)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	tmp -> content = content;
	tmp -> next = data-> top;
	data -> top = tmp;
	data -> cnt++;
}

int	pop(t_data *data)
{
	int		x;
	t_list	*tmp;

	if (ft_is_empty(data) != 1) 
	{
		tmp = data -> top;
		data -> top = data -> top -> next;
		x = tmp -> content;
		free(tmp);
		data -> cnt--;
		return (x);
	}
	return (0);
}

int	top(t_data *data)
{
	if (ft_is_empty(data) != 1)
		return (data->top->content);
	return ('\0');
}
