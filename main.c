/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhuang <fhuang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:45:08 by fhuang            #+#    #+#             */
/*   Updated: 2016/01/18 12:34:01 by fhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error(t_list **lst)
{
	ft_putendl("error");
	free_tetris(lst);
}

int		main(int ac, char **av)
{
	int			fd;
	t_list		**lst;

	if (ac == 2)
	{
		if (!(lst = (t_list**)malloc(sizeof(t_list*))))
			return (-1);
		*lst = NULL;
		if (((fd = open(av[1], O_RDONLY)) == -1))
		{
			ft_putendl("error");
			return (-1);
		}
		if (!(check_file(lst, fd)))
		{
			error(lst);
			return (close(fd) == -1 ? -1 : 0);
		}
		backtracking(lst, square_size(ft_alphabet('a') - 64));
		if (close(fd) == -1)
			return (-1);
	}
	else
		ft_putendl("error");
	return (0);
}
