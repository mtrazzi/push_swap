/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:43:09 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/07/26 12:03:06 by mtrazzi          ###   ########.fr       */
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
	t_elt			*tb;
}					t_stack;
typedef struct		s_op
{
	struct s_op		*next;
	char			*op;
}					t_op;
t_elt				*ft_new_elt(int n, t_elt *next, t_elt *prev);
t_stack				*ft_new_stack(void);
t_elt				*ft_add_elt(t_elt *t, int n);
t_elt				*ft_add_elt_end(t_elt *t, int n);
t_elt				*ft_new(int n);
void				ft_print_top(t_elt *t);
void				ft_print_stack(t_stack *s);
char				*ft_return_line(void);
t_elt				*ft_parse_argv(int ac, char **av);
void				ft_error(void);
int					ft_is_correct_input(int ac, char **av);
t_elt				*ft_delete_elt(t_elt *lst);
void				ft_print_lst(t_elt *lst);
int					ft_is_valid_op(char *s);
t_op				*ft_add_to_end(char *op, t_op*lst);
t_op				*ft_parse_stdin(void);
void				ft_print_lst_op(t_op *t);
char				*ft_pop_op(t_op **lst);
int					ft_is_empty(t_elt *lst);
int					ft_is_ordered(t_elt *lst);
t_elt				*ft_last_elt(t_elt *lst);
size_t				ft_lst_len_opt(t_elt *lst);
t_stack				*ft_sa(t_stack *s);
t_stack				*ft_sb(t_stack *s);
t_stack				*ft_ss(t_stack *s);
t_stack				*ft_pa(t_stack *s);
t_stack				*ft_pb(t_stack *s);

#endif
