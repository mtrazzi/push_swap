/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:20:29 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/03 20:00:50 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_min_rot_inf(t_elt *t)
{
	int i;

	i = 1;
	if (!t->next)
		return (i);
	while (t->next)
	{
		t = t->next;
		i++;
	}
	return (i);
}

int		ft_min_rot_sup(t_elt *t)
{
	int i;

	i = 0;
	while (t->prev->next)
	{
		t = t->prev;
		i++;
	}
	return (i);
}

int		ft_min_rot(t_elt *t)
{
	return (ft_min(ft_min_rot_inf(t), ft_min_rot_sup(t)));
}
