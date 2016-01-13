/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:46:33 by asalama           #+#    #+#             */
/*   Updated: 2015/12/09 12:14:05 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	i = 0;
	dst2 = (unsigned char*)dst;
	src2 = (const unsigned char*)src;
	while (i < n)
	{
		(dst2[i] = src2[i]);
		if ((src2[i]) == (unsigned char)(c))
			return (dst2 + i + 1);
		i++;
	}
	return (NULL);
}
