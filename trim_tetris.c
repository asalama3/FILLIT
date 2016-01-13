/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetris.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:25:04 by fhuang            #+#    #+#             */
/*   Updated: 2016/01/13 12:19:31 by fhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		trim_ho(char **tab, int n)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (x < 4)
	{
		if (ft_strncmp(tab[x], "....", n) == 0)
			ft_bzero(tab[x], 4);
		else
			i++;
		x++;
	}
	return (i);
}

int		trim_ver(char **tab, int x, int y)
{
	int		i;
	int		dot;
	int		alpha;

	alpha = 0;
	dot = 0;
	i = 0;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
			tab[y][x] == '.' ? dot++ : alpha++;
		if (alpha && alpha + dot == 4)
		{
			alpha = 0;
			dot = 0;
			i++;
		}
		if (dot == 4 && (y = -1))
			while (++y < 4)
				tab[y][x] = 0;
	}
	return (i);
}

void	go_left(char **tab, int boo, int y, int x)
{
	while (boo)
	{
		x = -1;
		while (++x < 4)
		{
			y = -1;
			while (++y < 4)
			{
				if (ft_isupper(tab[y][x]) && x == 0)
					return ;
				if (ft_isupper(tab[y][x]) == 1 && x > 0)
				{
					if (tab[y][x - 1] == '.')
					{
						tab[y][x - 1] = tab[y][x];
						tab[y][x] = '.';
						if (x - 1 == 0)
							boo = 0;
					}
					else if (ft_isupper(tab[y][x - 1]))
						boo = 0;
				}
			}
		}
	}
}

void	go_up(char **tab, int boo, int y, int x)
{
	while (boo)
	{
		y = -1;
		while (++y < 4)
		{
			x = -1;
			while (++x < 4)
			{
				if (ft_isupper(tab[y][x]) && y == 0)
					return ;
				if (ft_isupper(tab[y][x]) == 1 && y > 0)
				{
					if (tab[y - 1][x] == '.')
					{
						tab[y - 1][x] = tab[y][x];
						tab[y][x] = '.';
					}
					if (y - 1 == 0)
						boo = 0;
				}
			}
		}
	}
}

void	trim_tetris(char **tab)
{
	int		x;
	int		y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (ft_isupper(tab[y][x]) == 1)
			{
				go_left(tab, 1, 0, 0);
				go_up(tab, 1, 0, 0);
				return ;
			}
			x++;
		}
		y++;
	}
}
