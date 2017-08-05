/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:33:07 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/05 16:56:22 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_env	*e;

	e = ft_init_env(ac, av);
	ft_process(ac, e);
	ft_print_lst_op(e->lst_op);
	ft_free_lst_op(e->lst_op);
	ft_free_stack(e->s);
	free(e);
	while (1) {};
	return (0);
}
