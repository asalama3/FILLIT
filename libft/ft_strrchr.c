/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:52:41 by asalama           #+#    #+#             */
/*   Updated: 2015/12/03 12:21:17 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int max_len;

	max_len = (int)(ft_strlen(s));
	while (max_len >= 0)
	{
		if (s[max_len] == (unsigned char)(c))
			return ((char*)(s + max_len));
		max_len--;
	}
	return (NULL);
}
