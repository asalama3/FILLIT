/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 16:55:59 by asalama           #+#    #+#             */
/*   Updated: 2016/01/13 12:16:56 by fhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		good_to_go(t_list **lst, char **grid, int cote, int *stop)
{
	if ((try_space(grid, CONTENT, cote)) == 0)
	{
		*lst = (*lst)->next;
		if (*lst == NULL)
			(*stop) = 0;
		return (0);
	}
	return (1);
}

int		no_good_to_go(t_list **lst, t_list *first_m, char **grid, int cote)
{
	if (CONTENT->x == cote - 1 && CONTENT->y == cote - 1)
	{
		coord_maillon(*lst);
		*lst = find_my_tetris(lst, first_m, CONTENT->n_tetris - 1);
		if (*lst == NULL)
			return (0);
		ft_erase(grid, CONTENT->n_tetris, cote);
	}
	if (CONTENT->x >= cote)
	{
		CONTENT->x = 0;
		CONTENT->y++;
	}
	else
		CONTENT->x++;
	return (1);
}

int		backtracking(t_list **lst, int cote)
{
	int				stop;
	char			**grid;
	t_list			*first_m;

	stop = 1;
	first_m = *lst;
	while (stop)
	{
		if (!(grid = fresh_map(cote)))
			return (-1);
		while (*lst)
		{
			if (good_to_go(lst, grid, cote, &stop) == 1)
				if ((no_good_to_go(lst, first_m, grid, cote) == 0))
					break ;
		}
		if (stop != 0)
		{
			free_map(grid, cote++);
			coord_list(lst, first_m);
		}
	}
	print_map(grid, cote);
	return (0);
}
