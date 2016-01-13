/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:39:24 by asalama           #+#    #+#             */
/*   Updated: 2015/12/07 13:34:34 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*s1b;
	unsigned char		*s2b;

	i = 0;
	s1b = (unsigned char*)s1;
	s2b = (unsigned char*)s2;
	while (i < n)
	{
		if (s1b[i] != s2b[i])
			return ((int)(s1b[i] - s2b[i]));
		i++;
	}
	return (0);
}
