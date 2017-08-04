/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:42:41 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/04 14:31:51 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_top(t_elt *t)
{
	ft_putnbr(t->n);
	ft_putchar('\n');
}

void	ft_print_lst(t_elt *t)
{
	if (t)
	{
		ft_putnbr(t->prev->n);
		ft_putstr("\n|\n");
	}
	while (t)
	{
		ft_print_top(t);
		t = t->next;
	}
}

void	ft_print_top_op(t_op *t)
{
	ft_putstr(t->op);
	ft_putchar('\n');
}

void	ft_print_lst_op(t_op *t)
{
	while (t)
	{
		ft_print_top_op(t);
		t = t->next;
	}
}

void	ft_print_stack(t_stack *s)
{
	ft_putstr("\n\n>>>>>>>>>>\n\nstack a\n\n>>>>>>>>>>\n");
	ft_print_lst(s->ta);
	ft_putstr(">>>>>>>>>>\n\nstack b\n\n>>>>>>>>>>\n");
	ft_print_lst(s->tb);
	ft_putstr(">>>>>>>>>>\n\n");
}
