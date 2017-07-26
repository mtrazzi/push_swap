/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:33:40 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 12:16:23 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack *s;
	t_op	*lst;

	s = ft_new_stack();
	s->ta = ft_parse_argv(ac, av);
	ft_print_stack(s);
	ft_print_stack(ft_pb(s));
	ft_print_stack(ft_pb(s));
	/*lst = ft_parse_stdin();
	ft_putstr(">>>pop : ");
	ft_putstr(ft_pop_op(&lst));
	ft_putstr("<<<\n");
	ft_print_lst_op(lst);*/

	return (0);
}
