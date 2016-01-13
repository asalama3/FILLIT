/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:04:27 by asalama           #+#    #+#             */
/*   Updated: 2015/12/07 13:49:58 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (s2[0] == '\0')
		return ((char*)(s1));
	while (*s1 != '\0' && (ft_strlen(s2) <= n))
	{
		if (ft_strncmp(s1, s2, ft_strlen(s2)) == 0)
			return ((char*)(s1));
		s1++;
		n--;
	}
	return (NULL);
}
