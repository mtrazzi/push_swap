/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 13:07:53 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/27 13:59:06 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_env	*ft_init_env(int ac, char **av)
{
	t_env	*e;

	e = ft_memalloc(sizeof(t_env));
	e->s = ft_new_stack();
	e->s->ta = ft_parse_argv(ac, av);
	e->lst_op = NULL;
	return (e);
}
