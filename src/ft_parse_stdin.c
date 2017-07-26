/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_stdin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 15:45:33 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 15:24:06 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_valid_op(char *s)
{
	if (ft_strlen(s) < 2)
		return (0);
	if (ft_strlen(s) == 2 && (!ft_strncmp("sa", s, 2) || !ft_strncmp("ra", s, 2) || !ft_strncmp("pa", s, 2) || !ft_strncmp("sb", s, 2) || !ft_strncmp("rb", s, 2) || !ft_strncmp("pb", s, 2) || !ft_strncmp("rr", s, 2) || !ft_strncmp("ss", s, 2)))
		return (1);
	if (ft_strlen(s) == 3 && (!ft_strncmp("rra", s, 3) || !ft_strncmp("rrb", s, 3) || !ft_strncmp("rrr", s, 3)))
		return (1);
	return (0);
}

t_op	*ft_parse_stdin(void)
{
	char *line;
	t_op **lst;
	t_op *tmp;

	tmp = NULL;
	lst = &tmp;
	while (get_next_line(0, &line) > 0)
	{
		if (!ft_is_valid_op(line))
			ft_error();
		*lst = ft_add_to_end(line, *lst);
	}
	return (*lst);
}
