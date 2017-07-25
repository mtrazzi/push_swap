/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:43:09 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/25 16:06:01 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

#include "libft.h"
#include <limits.h>
#include <stdio.h>

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
t_stack				*ft_new_stack(void);
t_elt				*ft_add_elt(t_elt *t, int n);
t_elt				*ft_new(int n);
void				ft_print_top(t_elt *t);
char				*ft_return_line(void);
t_elt				*ft_parse_argv(int ac, char **av);
void				ft_error(void);
int					ft_is_correct_input(int ac, char **av);
t_elt				*ft_delete_elt(t_elt *lst);
void				ft_print_lst(t_elt *lst);
int					ft_is_valid_op(char *s);

#endif
