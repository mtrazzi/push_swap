/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:43:09 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/24 20:05:57 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

#include "libft.h"

typedef struct		s_elt
{
	int		n;
	struct s_elt	*next;
	struct s_elt 	*prev;
}					t_elt;
typedef struct		s_stack
{
	t_elt			*ta;
	t_elt			*ba;
	t_elt			*tb;
	t_elt			*bb;
}					t_stack;
t_elt				*ft_new_elt(int n, t_elt *next, t_elt *prev);
t_stack				ft_new_stack(void);
void				ft_add_elt(t_elt *t, int n);
t_elt				*ft_new(int n);
void				ft_print_top(t_elt *t);
char				*ft_return_line(void);

#endif
