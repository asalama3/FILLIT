/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tetris.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhuang <fhuang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 16:57:31 by fhuang            #+#    #+#             */
/*   Updated: 2016/01/12 19:22:52 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	put_tetris(t_list **lst, t_maillon tetris)
{
	char	c;

	trim_tetris(tetris.tab);
	tetris.hor = trim_ver(tetris.tab, -1, -1);
	tetris.ver = trim_ho(tetris.tab, tetris.hor);
	c = ft_alphabet('a');
	tetris.n_tetris = c;
	tetris.x = 0;
	tetris.y = 0;
	ft_lstaddend(lst, ft_lstnew(&tetris, sizeof(tetris)));
}
