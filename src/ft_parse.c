/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:42:34 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 16:55:43 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_return_line(void)
{
	char *line;

	if (get_next_line(0, &line) == -1)
		exit(EXIT_FAILURE);
	return (line);
}

t_elt	*ft_argv_to_lst(int ac, char **av)
{
	t_elt	*lst;
	int		i;

	i = 2;
	lst = ft_new(ft_atoi(av[1]));
	while (i < ac)
	{
		lst = ft_add_elt_end(lst, ft_atoi(av[i]));
		i++;
	}
	return (lst);
}

t_elt	*ft_parse_argv(int ac, char **av)
{
	if (ac < 2)
		exit(EXIT_FAILURE);
	if (!ft_is_correct_input(ac, av))
		ft_error();
	return (ft_argv_to_lst(ac, av));
}
