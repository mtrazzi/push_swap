/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:33:07 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/27 17:18:46 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_env	*e;
	t_elt	*t;

	e = ft_init_env(ac, av);
	while (!ft_is_empty(e->s->ta))
	{
		ft_print_stack(e->s);
		//ft_putstr("enter loop\n");
		t = ft_find_min(e->s->ta, e->s);
		//ft_putstr("middle loop\n");
		ft_update(t, e);
		//ft_putstr("quit loop\n");
	}
//	ft_putstr("quit while\n");
	ft_last_reorder(e);
	while (!ft_is_empty(e->s->tb))
		ft_do_op_env(e, "pa");
	ft_print_lst_op(e->lst_op);
	return (0);
}
