/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:28:35 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/04 14:33:45 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elt	*ft_where_to_insert(int m, t_elt *lst)
{
	if (!lst->next)
		return (lst);
	while (!((m < lst->prev->n && m > lst->n) || \
	(lst->prev->n < lst->n && (m > lst->n || m < lst->prev->n))))	
		lst = lst->next;	
	return (lst);
}

int		ft_cost_insert(t_elt *t, t_stack *s)
{
	t_elt *to_insert;
	int tab[4];

	if (!s->tb)
		return (ft_min_rot(t));
	to_insert = ft_where_to_insert(t->n, s->tb);		
	tab[0] = ft_min_rot_inf(t);
	tab[1] = ft_min_rot_sup(t);
	tab[2] = ft_min_rot_inf(to_insert);
	tab[3] = ft_min_rot_sup(to_insert);
	return (ft_min(tab[0] + tab[2], ft_min(tab[0] + tab[3], \
			ft_min(tab[1] + tab[2], tab[1] + tab[3]))));
}

t_elt	*ft_find_min(t_elt *lst, t_stack *s)
{
	int		min;
	int		tmp;
	t_elt	*result;

	if (lst->next == lst)
		return (lst);
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
	return (result);
}
