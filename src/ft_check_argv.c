/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:08:43 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/25 13:30:35 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_number(char *s)
{
	int i;

	i = 0;
	while (ft_isdigit(s[i]))
		i++;
	return (i > 0 && !s[i]);
}

int		ft_is_int(char *s)
{
	if (!ft_is_number(s))
		return (0);
	if (ft_atoi(s) < 0 && (ft_strlen(s) > 11 && ft_atol(s) < INT_MIN))
		return (0);
	if (ft_atoi(s) > 0 && (ft_strlen(s) > 10 && ft_atol(s) > INT_MAX))
		return (0);
	return (1);
}

int		ft_are_nb_int(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		if (!ft_is_int(av[i]))
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_only_once(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (!ft_strcmp(av[i], av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_is_correct_input(int ac, char **av)
{
	return (ft_are_nb_int(ac, av) && ft_is_only_once(ac, av));
}
