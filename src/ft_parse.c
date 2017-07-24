/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:42:34 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/24 20:11:36 by mtrazzi          ###   ########.fr       */
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
