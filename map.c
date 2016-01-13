/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhuang <fhuang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:02:20 by fhuang            #+#    #+#             */
/*   Updated: 2016/01/13 12:19:13 by fhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			square_size(size_t nb_tetris)
{
	int		size;
	int		cote;

	cote = 0;
	size = nb_tetris * 4;
	while (size > cote * cote)
		cote++;
	return (cote);
}

void		fill_with_dots(char **tab, int cote)
{
	int		i;
	int		j;

	j = 0;
	while (j < cote)
	{
		i = 0;
		while (i < cote)
		{
			tab[j][i] = '.';
			i++;
		}
		tab[j][i] = '\0';
		j++;
	}
}

char		**fresh_map(int cote)
{
	int		j;
	char	**map;

	if (!(map = (char**)ft_memalloc(sizeof(char*) * (cote + 1))))
		return (NULL);
	j = 0;
	while (j < cote)
		if (!(map[j++] = (char*)ft_memalloc(sizeof(char) * (cote + 1))))
			return (NULL);
	fill_with_dots(map, cote);
	return (map);
}

void		print_map(char **map, int cote)
{
	int		i;

	i = 0;
	while (i < cote)
		ft_putendl(map[i++]);
}
