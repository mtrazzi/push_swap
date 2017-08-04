/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:13:01 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/08/04 16:52:51 by mtrazzi          ###   ########.fr       */
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

int		ft_backtracking_aux(t_env *e, char **tab, int n)
{
	int		i;
	t_env	*backup;

	ft_putstr("@@@@@@@@@@@@@@@@@@@");
	ft_print_lst_op(e->lst_op);
	if (n > 2)
		return (0);
	if (ft_is_correct(e))
		return (1);
	i = 0;
	backup = e;
	while (i < 11)
	{
		if (ft_backtracking_aux(ft_do_op_env(e, tab[i]), tab, n + 1))
			return (1);
		e = backup;
		i++;
	}
	return (0);
}

void	ft_backtracking(t_env *e)
{
	char **tab;

	tab = ft_op_tab();
	ft_backtracking_aux(e, tab, 0);
	free(tab);	
}
