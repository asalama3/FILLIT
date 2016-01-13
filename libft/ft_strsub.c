/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:57:49 by asalama           #+#    #+#             */
/*   Updated: 2015/12/10 14:56:31 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	ret = (char*)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (ret == NULL)
		return (NULL);
	if (len == 0)
		return ("");
	while (s[start] != '\0' && i < len)
	{
		ret[i] = (char)s[start];
		start++;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
