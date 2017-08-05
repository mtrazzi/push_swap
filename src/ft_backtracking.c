/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:13:01 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/05 15:06:16 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_op_tab(void)
{
	char **result;

	result = ft_memalloc(sizeof(char *) * 11);
	result[0] = "sa";
	result[1] = "sb";
	result[2] = "ss";
	result[3] = "pa";
	result[4] = "pb";
	result[5] = "ra";
	result[6] = "rb";
	result[7] = "rr";
	result[8] = "rra";
	result[9] = "rrb";
	result[10] = "rrr";
	return (result);
}

int		ft_do_not_repeat(int i, t_env *e)
{
	char *op;
	int  a;
	int  b;

//	ft_putstr("hey");
	if (e->lst_op)
		op = ft_last_op(e->lst_op);
//	ft_putstr("segfault ?");
	a = ft_lst_len_opt(e->s->ta);
	b = ft_lst_len_opt(e->s->tb);	
	if ((!i && a < 2) || (i == 1 && b < 2) || (i == 2 && ((a < 2 || b < 2))) \
		|| (i == 3 && !b) || (i == 4 || !a))
		return (i + 1);
//	ft_putstr("here ?");
if (e->lst_op && ft_strlen(op) == 2 &&
	((i == 0 && !ft_strcmp(op, "sa")) || \
	(i == 1 && !ft_strcmp(op, "sb")) || \
	(i == 2 && (!ft_strcmp(op, "ss") || !ft_strcmp(op, "sa") || !ft_strcmp(op, "sb"))) || \
	(i == 3 && !ft_strcmp(op, "pb")) || \
	(i == 4 && !ft_strcmp(op, "pa")) || \
	(i == 8 && !ft_strcmp(op, "ra")) || \
	(i == 9 && !ft_strcmp(op, "rb")) || \
	(i == 10 && !ft_strcmp(op, "rr"))))
		return (i + 1);	
//	ft_putstr("or here ?");
//	if (e->lst_op && ft_strlen(op) == 3 &&
//		((i == 5 && !ft_strcmp(op, "rra")) || \
//		(i == 6 && !ft_strcmp(op, "rrb")) || \
//		(i == 7 && !ft_strcmp(op, "rrr"))))
//		return (i + 1);
	return (i);
}

int		ft_backtracking_aux(t_env *e, char **tab, int n, int k)
{
	int		i;

	if (ft_is_correct(e))	
		return (1);
	if (n == k)
		return (0);
	i = 0;
	while (i < 11)
	{
		while (i != ft_do_not_repeat(i, e))
			i = ft_do_not_repeat(i, e);
			if (i > 10)
				return (0);	
//		ft_putstr("n is : ");
//		ft_putnbr(n);
//		ft_putchar('\n');
//		ft_print_lst_op(e->lst_op);
//		ft_print_stack(e->s);
		if (ft_backtracking_aux(ft_do_op_env(e, tab[i]), tab, n + 1, k))
			return (1);
//		ft_print_stack(e->s);
		ft_do_reverse_op_env(e, ft_pop_end(&e->lst_op));	
//		ft_print_stack(e->s);
		i++;
	}
	return (0);
}

void	ft_backtracking(t_env *e)
{
	char	**tab;
	int		k;

	k = 1;
	tab = ft_op_tab();
	while (!ft_backtracking_aux(e, tab, 0, k))
		k++;
}
