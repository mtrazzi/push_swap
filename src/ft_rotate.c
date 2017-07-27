/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 13:26:41 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/27 17:17:30 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*ft_ra(t_stack *s)
{
	if (!s->ta || s->ta->prev == s->ta)
		return (s);
	if (s->ta->next == s->ta->prev)
		return (ft_sa(s));
	s->ta->prev->next = s->ta;
	s->ta = s->ta->next;
	s->ta->prev->next = NULL;
	return (s);
}

t_stack		*ft_rb(t_stack *s)
{
	if (!s->tb || s->tb->prev == s->tb)
		return (s);
	if (s->tb->next == s->tb->prev)
		return (ft_sb(s));
	s->tb->prev->next = s->tb;
	s->tb = s->tb->next;
	s->tb->prev->next = NULL;
	return (s);
}

t_stack		*ft_rr(t_stack *s)
{
	return (ft_ra(ft_rb(s)));
}
