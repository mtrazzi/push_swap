/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 14:35:25 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/25 15:09:09 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elt	*ft_delete_elt(t_elt *lst)
{
	t_elt	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst->next;
	tmp->prev = NULL;
	return (tmp);
}
