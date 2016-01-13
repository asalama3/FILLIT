/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:49:48 by asalama           #+#    #+#             */
/*   Updated: 2015/12/07 13:49:48 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	if (s2[0] == '\0')
		return ((char*)(s1));
	while (*s1 != '\0')
	{
		if (ft_strncmp(s1, s2, ft_strlen(s2)) == 0)
			return ((char*)(s1));
		s1++;
	}
	return ((char*)(NULL));
}
