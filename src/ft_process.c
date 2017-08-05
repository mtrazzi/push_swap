/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 15:07:24 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/05 15:13:37 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process(int ac, t_env *e)
{
	t_elt	*t;

	if (ac < 6)
		ft_backtracking(e);
	else
	{
		while (!ft_is_empty(e->s->ta))
		{
			t = ft_find_min(e->s->ta, e->s);
			ft_update(t, e);
		}
		ft_last_reorder(e);
		while (!ft_is_empty(e->s->tb))
			ft_do_op_env(e, "pa");
	}
}
