/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 09:17:47 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/04 15:47:13 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_empty(t_elt *lst)
{
	return (!lst);
}

int		ft_is_ordered(t_elt *lst)
{
	while (lst->next)
	{
		if (lst->n > lst->next->n)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int		ft_is_correct(t_env *e)
{
	return (ft_is_empty(e->s->tb) && ft_is_ordered(e->s->ta));
}
