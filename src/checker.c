/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:33:40 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 15:15:41 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack *s;
	t_op	*lst_op;

	s = ft_new_stack();
	s->ta = ft_parse_argv(ac, av);
	lst_op = ft_parse_stdin();
	while (lst_op)
		ft_do_op(s, ft_pop_op(&lst_op));
	if (ft_is_ordered(s->ta) && ft_is_empty(s->tb))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	return (0);
}
