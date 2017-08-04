/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:46:36 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/04 14:59:09 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_sa(t_stack *s)
{
	t_elt *fst;
	t_elt *snd;

	if (!s->ta || !s->ta->next)
		return (s);
	fst = s->ta;
	snd = s->ta->next;
	if (snd == fst->prev)
	{
		fst->next = NULL;
		snd->next = fst;
		s->ta = snd;
		return (s);
	}
	fst->next = snd->next;
	snd->next->prev = fst;
	snd->next = fst;
	snd->prev = fst->prev;
	fst->prev = snd;
	s->ta = snd;
	return (s);
}

t_stack	*ft_sb(t_stack *s)
{
	t_elt *fst;
	t_elt *snd;

	if (!s->tb || !s->tb->next)
		return (s);
	fst = s->tb;
	snd = s->tb->next;
	if (snd == fst->prev)
	{
		fst->next = NULL;
		snd->next = fst;
		s->tb = snd;
		return (s);
	}
	fst->next = snd->next;
	snd->next->prev = fst;
	snd->next = fst;
	snd->prev = fst->prev;
	fst->prev = snd;
	s->tb = snd;
	return (s);
}

t_stack	*ft_ss(t_stack *s)
{
	return (ft_sa(ft_sb(s)));
}
