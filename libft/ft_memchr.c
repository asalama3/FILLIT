/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:52:18 by asalama           #+#    #+#             */
/*   Updated: 2015/12/03 14:06:26 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*sb;

	i = 0;
	sb = (const unsigned char*)s;
	while (i < n)
	{
		if (sb[i] == (unsigned char)(c))
			return (void*)(sb + i);
		i++;
	}
	return (NULL);
}
