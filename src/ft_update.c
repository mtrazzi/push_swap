/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 13:59:10 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/04 12:26:20 by mtrazzi          ###   ########.fr       */
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

int		ft_choose_sum(int a, int b, int c, int d)
{
	int	s[4];

	s[0] = a + c;
	s[1] = a + d;
	s[2] = b + c;
	s[3] = b + d;
	if (s[0] <= ft_min(ft_min(s[1], s[2]), s[3]))
		return (0);
	else if (s[1] <= ft_min(s[2], s[3]))
		return (1);
	else if (s[2] <= s[3])
		return (2);
	else
		return (3);
}

int		ft_which_case(t_elt *t, t_env *e)
{
	t_elt *to_insert;

	to_insert = ft_where_to_insert(t->n, e->s->tb);
	return (ft_choose_sum(ft_min_rot_inf(t), ft_min_rot_sup(t), \
			ft_min_rot_inf(to_insert), ft_min_rot_sup(to_insert)));
}

void	ft_update(t_elt *t, t_env *e)
{
	int	n;
	t_elt	*to_insert;

	if (!e->s->tb)
	{
		ft_do_op_env(e, "pb");
		return ;
	}
	to_insert = ft_where_to_insert(t->n, e->s->tb);
	n = ft_which_case(t, e);
	if (n == 0 || n == 1)
		ft_repeat_op(ft_min_rot_inf(t), "rra", e);
	else
		ft_repeat_op(ft_min_rot_sup(t), "ra", e);
	if (n == 0 || n == 2)
		ft_repeat_op(ft_min_rot_inf(to_insert), "rrb", e);
	else
		ft_repeat_op(ft_min_rot_sup(to_insert), "rb", e);
	ft_do_op_env(e, "pb");
}

void	ft_last_reorder(t_env *e)
{
	while (e->s->tb->n < e->s->tb->prev->n)
		ft_do_op_env(e, "rb");
}
