/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 09:06:23 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 09:53:30 by mtrazzi          ###   ########.fr       */
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

t_op	*ft_add_to_end(char *op, t_op *lst)
{
	t_op *tmp;

	if (!lst)
		return (ft_new_op(op));
	tmp = lst;
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = ft_new_op(op);
	return (tmp);
}

char	*ft_pop_op(t_op **lst)
{
	char *s;

	if (!(*lst))
		return ("end");
	s = (*lst)->op;
	*lst = (*lst)->next;
	return (s);
}
