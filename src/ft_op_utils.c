/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 09:06:23 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/27 14:30:13 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_op	*ft_new_op(char *op)
{
	t_op *t;

	t = ft_memalloc(sizeof(t_op));
	t->next = NULL;
	t->op = op;
	return (t);
}

void	ft_add_to_end(char *op, t_op **lst)
{
	t_op *tmp;

	if (!(*lst))
	{
		*lst = ft_new_op(op);
		return ;
	}
	tmp = *lst;
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = ft_new_op(op);
	*lst = tmp;
}

char	*ft_pop_op(t_op **lst)
{
	char *s;

	s = (*lst)->op;
	*lst = (*lst)->next;
	return (s);
}
