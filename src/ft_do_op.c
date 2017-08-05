/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:19:41 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/05 19:38:03 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*ft_do_op(t_stack *s, char *op)
{
//	ft_putstr("\n**************************OP : ");
//	ft_putstr(op);
//	ft_putstr("**************************\n");
	if (ft_strlen(op) == 2 && !ft_strncmp(op, "sa", 2))
		return (ft_sa(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "ra", 2))
		return (ft_ra(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "pa", 2))
		return (ft_pa(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "sb", 2))
		return (ft_sb(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "rb", 2))
		return (ft_rb(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "pb", 2))
		return (ft_pb(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "ss", 2))
		return (ft_ss(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "rr", 2))
		return (ft_rr(s));
	else if (ft_strlen(op) == 3 && !ft_strncmp(op, "rra", 3))
		return (ft_rra(s));
	else if (ft_strlen(op) == 3 && !ft_strncmp(op, "rrb", 3))
		return (ft_rrb(s));
	else
		return (ft_rrr(s));
}

t_stack		*ft_do_reverse_op(t_stack *s, char *op)
{
//	ft_putstr("\n**************************REVERSE OP : ");
//	ft_putstr(op);
//	ft_putstr("**************************\n");
	if (ft_strlen(op) == 2 && !ft_strncmp(op, "sa", 2))
		return (ft_sa(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "ra", 2))
		return (ft_rra(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "pa", 2))
		return (s->ta ? ft_pb(s) : s);
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "sb", 2))
		return (ft_sb(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "rb", 2))
		return (ft_rrb(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "pb", 2))
		return (s->tb ? ft_pa(s) : s);
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "ss", 2))
		return (ft_ss(s));
	else if (ft_strlen(op) == 2 && !ft_strncmp(op, "rr", 2))
		return (ft_rrr(s));
	else if (ft_strlen(op) == 3 && !ft_strncmp(op, "rra", 3))
		return (ft_ra(s));
	else if (ft_strlen(op) == 3 && !ft_strncmp(op, "rrb", 3))
		return (ft_rb(s));
	else
		return (ft_rr(s));
}

t_env		*ft_do_op_env(t_env *e, char *op)
{
	e->s = ft_do_op(e->s, op);
	ft_add_to_end(ft_strdup(op), &(e->lst_op));
	return (e);
}

t_env		*ft_do_reverse_op_env(t_env *e, char *op)
{
	e->s = ft_do_reverse_op(e->s, op);
	return (e);
}
