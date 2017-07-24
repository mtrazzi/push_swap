/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:33:40 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/24 20:07:05 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack s;
	int		i;

	i = 2;
	s = ft_new_stack();
	if (ac > 1)
	{
		s.ta = ft_new(ft_atoi(av[1]));
	}		
	while (i < ac)
	{
		ft_add_elt(s.ta, ft_atoi(av[i]));
		i++;
	}
	s = ft_new_stack();

	return (0);
}
