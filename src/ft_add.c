/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:56:18 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/25 15:31:34 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elt		*ft_new_elt(int n, t_elt *next, t_elt *prev)
{
	t_elt	*t;

	t = ft_memalloc(sizeof(t_elt));
	t->n = n;
	t->next = next;
	t->prev = prev;
	return (t);
}

t_elt		*ft_new(int n)
{
	return (ft_new_elt(n, NULL, NULL));
}

t_stack		*ft_new_stack(void)
{
	t_stack	*s;
	
	s = ft_memalloc(sizeof(t_stack));
	s->ta = NULL;
	s->ba = NULL;
	s->tb = NULL;
	s->bb = NULL;
	return (s);
}

t_elt		*ft_add_elt(t_elt *t, int n)
{
	t_elt	*new;

	new = ft_new(n);
	new->next = t;
	t->prev = new;
	return (new);
}
