/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 16:31:20 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/02 17:54:20 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_lst_op(t_op *lst)
{
	t_op *tmp;

	if (!lst)
		return ;
	while (lst->next)
	{
		tmp = lst->next;
		free(lst->op);
		free(lst);
		lst = tmp;
	}
	free(lst->op);
	free(lst);
}

void	ft_free_lst_elt(t_elt *lst)
{
	t_elt *tmp;

	if (!lst)
		return ;
	while (lst->next)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	free(lst);
}

void	ft_free_stack(t_stack *s)
{
	ft_free_lst_elt(s->ta);
	ft_free_lst_elt(s->tb);
	free(s);
}
