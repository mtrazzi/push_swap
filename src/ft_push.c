/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:56:42 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 12:20:40 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_pa(t_stack *s)
{
	t_elt	*ta;
	t_elt	*tb;

	if (!s->tb)
		return (s);
	tb = s->tb;
	if (tb->next)
		tb->next->prev = tb->prev;
	s->tb = tb->next;
	if (!s->ta)
	{
		tb->next = NULL;
		tb->prev = tb;
		s->ta = tb;
		return (s);
	}
	ta = s->ta;
	tb->prev = ta->prev;
	ta->prev = tb;
	tb->next = ta;
	s->ta = tb;
	return (s);
}

t_stack	*ft_pb(t_stack *s)
{
	t_elt	*ta;
	t_elt	*tb;

	if (!s->ta)
		return (s);
	ta = s->ta;
	if (ta->next)
		ta->next->prev = ta->prev;
	s->ta = ta->next;
	if (!s->tb)
	{
		ta->next = NULL;
		ta->prev = ta;
		s->tb = ta;
		return (s);
	}
	tb = s->tb;
	ta->prev = tb->prev;
	tb->prev = ta;
	ta->next = tb;
	s->tb = ta;
	return (s);
}
