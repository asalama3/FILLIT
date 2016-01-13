/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_place.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhuang <fhuang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 13:40:31 by fhuang            #+#    #+#             */
/*   Updated: 2016/01/13 12:15:19 by fhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	coord_list(t_list **lst, t_list *first)
{
	*lst = first;
	while (*lst)
	{
		((t_maillon*)((*lst)->content))->x = 0;
		((t_maillon*)((*lst)->content))->y = 0;
		*lst = (*lst)->next;
	}
	*lst = first;
}

void	coord_maillon(t_list *lst)
{
	((t_maillon*)(lst->content))->x = 0;
	((t_maillon*)(lst->content))->y = 0;
}

t_list	*find_my_tetris(t_list **lst, t_list *first_m, char alpha)
{
	*lst = first_m;
	while (*lst)
	{
		if (((t_maillon*)((*lst)->content))->n_tetris == alpha)
			return (*lst);
		*lst = (*lst)->next;
	}
	return (0);
}

void	cpy_maillon(char **grid, t_maillon *tetris)
{
	int			i;
	int			j;

	j = 0;
	while (j < tetris->ver)
	{
		i = 0;
		while (i < tetris->hor)
		{
			if (ft_isupper(tetris->tab[j][i]) &&
					grid[tetris->y + j][tetris->x + i] == '.')
				grid[tetris->y + j][tetris->x + i] = tetris->tab[j][i];
			i++;
		}
		j++;
	}
}

int		try_space(char **grid, t_maillon *tetris, int cote)
{
	int			i;
	int			j;

	j = 0;
	while (j < tetris->ver)
	{
		if (tetris->y + j >= cote)
			return (1);
		i = 0;
		while (i < tetris->hor)
		{
			if (tetris->x + i >= cote)
				return (1);
			if (ft_isupper(tetris->tab[j][i]) &&
					grid[tetris->y + j][tetris->x + i] != '.')
				return (1);
			i++;
		}
		j++;
	}
	cpy_maillon(grid, tetris);
	return (0);
}
