/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:42:41 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 11:58:12 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_top(t_elt *t)
{
	if (!t)
	{
		ft_putstr("NULL\n");
		return ;
	}
	ft_putnbr(t->n);
}

void	ft_print_lst(t_elt *t)
{
	while (t)
	{
		ft_print_top(t);
		ft_putstr("\n|\n");
		t = t->next;
	}
	ft_putstr("NULL\n");
}

void	ft_print_top_op(t_op *t)
{
	if (!t)
	{
		ft_putstr("NULL\n");
		return ;
	}
	ft_putstr(t->op);
}

void	ft_print_lst_op(t_op *t)
{
	while (t)
	{
		ft_print_top_op(t);
		ft_putstr("\n|\n");
		t = t->next;
	}
	ft_putstr("NULL\n");
}

void	ft_print_stack(t_stack *s)
{
	ft_putstr(">>>>>>>>>>\n\nstack a\n\n>>>>>>>>>>\n\n");
	ft_print_lst(s->ta);
	ft_putstr(">>>>>>>>>>\n\nstack b\n\n>>>>>>>>>>\n\n");
	ft_print_lst(s->tb);	
}
