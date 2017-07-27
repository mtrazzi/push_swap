/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:28:35 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/27 15:38:23 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elt	*ft_where_to_insert(int m, t_elt *lst)
{
	if (!lst->next)
		return (lst);
	ft_putstr("m is ");
	ft_putnbr(m);
	ft_putstr("\nAnd top of lst is ");
	ft_putnbr(lst->n);
	ft_putchar('\n');
	while (!((m < lst->prev->n && m > lst->n) || \
	(lst->prev->n < lst->n && (m > lst->n || m < lst->prev->n))))
	{
		ft_putstr("loop");
		ft_putnbr(lst->prev->n);
		ft_putnbr(lst->n);
		lst = lst->next;
	}
	return (lst);
}

int		ft_cost_insert(t_elt *t, t_stack *s)
{
	if (!s->tb)
		return (ft_min_rot(t));
	return (ft_min_rot(t) + ft_min_rot(ft_where_to_insert(t->n, s->tb)) + 1);
}

t_elt	*ft_find_min(t_elt *lst, t_stack *s)
{
	int		min;
	int		tmp;
	t_elt	*result;

	min = ft_cost_insert(lst, s);
	result = lst;
	while (lst->next)
	{
		lst = lst->next;
		tmp = ft_cost_insert(lst, s);
		if (tmp < min)
		{
			result = lst;
			min = tmp;
		}
	}
	return (lst);
}
