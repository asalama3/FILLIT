/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhuang <fhuang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:45:08 by fhuang            #+#    #+#             */
/*   Updated: 2016/01/13 17:25:52 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int			fd;
	int			cote;
	t_list		**lst;

	if (ac == 2)
	{
		if (!(lst = (t_list**)malloc(sizeof(t_list*))))
			return (-1);
		*lst = NULL;
		if ((fd = open(av[1], O_RDONLY)) == -1)
			return (-1);
		if (!(check_file(lst, fd)))
		{
			ft_putendl("error");
			free_tetris(lst);
			return (close(fd) == -1 ? -1 : 0);
		}
		cote = square_size(ft_alphabet('a') - 64);
		backtracking(lst, cote);
		if (close(fd) == -1)
			return (-1);
	}
	else
		ft_putendl("error");
	return (0);
}
