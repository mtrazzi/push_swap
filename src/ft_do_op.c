/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:19:41 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 14:59:25 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*ft_do_op(t_stack *s, char *op)
{
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