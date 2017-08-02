/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:46:36 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/02 19:11:46 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_sa(t_stack *s)
{
	t_elt *fst;
	t_elt *snd;

	if (ft_lst_len_opt(s->ta) < 2)
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
	s->ta = snd;
	fst->next = snd->next;
	snd->next = fst;
	snd->prev = fst->prev;
	fst->prev = snd;
	return (s);
}

t_stack	*ft_sb(t_stack *s)
{
	t_elt *fst;
	t_elt *snd;

	if (ft_lst_len_opt(s->tb) < 2)
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
	s->tb = snd;
	fst->next = snd->next;
	snd->next = fst;
	snd->prev = fst->prev;
	fst->prev = snd;
	return (s);
}

t_stack	*ft_ss(t_stack *s)
{
	return (ft_sa(ft_sb(s)));
}
