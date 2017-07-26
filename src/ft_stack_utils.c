/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:08:51 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 10:51:34 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elt	*ft_last_elt(t_elt *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

size_t	ft_lst_len_opt(t_elt *lst)
{
	size_t i;

	i = 0;
	while (lst && i < 2)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
