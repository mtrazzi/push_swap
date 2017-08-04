/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 13:40:49 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/04 16:20:42 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*ft_rra(t_stack *s)
{
	if (!s->ta || s->ta->prev == s->ta)
		return (s);
	if (s->ta->next == s->ta->prev)
		return (ft_sa(s));
	s->ta->prev->next = s->ta;
	s->ta = s->ta->prev;
	s->ta->prev->next = NULL;
	return (s);
}

t_stack		*ft_rrb(t_stack *s)
{
	if (!s->tb || s->tb->prev == s->tb)
		return (s);
	if (s->tb->next == s->tb->prev)
		return (ft_sb(s));
	s->tb->prev->next = s->tb;
	s->tb = s->tb->prev;
	s->tb->prev->next = NULL;
	return (s);
}

t_stack		*ft_rrr(t_stack *s)
{
	return (ft_rra(ft_rrb(s)));
}
