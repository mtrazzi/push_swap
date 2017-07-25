/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:42:41 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/25 15:42:46 by mtrazzi          ###   ########.fr       */
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
