/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:46:36 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/27 17:17:40 by mtrazzi          ###   ########.fr       */
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
	//ft_putstr("ENTERING RB - STACK IS\n");
	//ft_print_stack(s);
	fst = s->tb;
	snd = s->tb->next;
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
