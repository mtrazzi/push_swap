/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 13:59:10 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/27 15:42:22 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_repeat_op(int k, char *op, t_env *e)
{
	int i;

	i = 0;
	while (i < k)
	{
		ft_do_op_env(e, op);
		i++;
	}
}

void	ft_update_left(t_elt *t, t_env *e)
{	
	if (ft_min_rot_sup(t) < ft_min_rot_inf(t))
		ft_repeat_op(ft_min_rot_sup(t), "ra", e);
	else
		ft_repeat_op(ft_min_rot_inf(t), "rra", e);
}

void	ft_update_right(t_elt *t, t_env *e)
{
	t_elt	*to_insert;

	ft_print_stack(e->s);
	to_insert = ft_where_to_insert(t->n, e->s->tb);
	ft_putstr("passed first check in");
	if (ft_min_rot_sup(to_insert) < ft_min_rot_inf(to_insert))
		ft_repeat_op(ft_min_rot_sup(to_insert), "rb", e);
	else
		ft_repeat_op(ft_min_rot_inf(to_insert), "rrb", e);
}

void	ft_update(t_elt *t, t_env *e)
{
	if (!e->s->tb)
	{
		ft_do_op_env(e, "pb");
		return ;
	}
	ft_putstr("before left");
	ft_update_left(t, e);
	ft_putstr("before right");
	ft_update_right(t, e);
	ft_putstr("after right");
	ft_do_op_env(e, "pb");
}

void	ft_last_reorder(t_env *e)
{
	while (e->s->tb->n < e->s->tb->prev->n)
		ft_do_op_env(e, "rb");
}
