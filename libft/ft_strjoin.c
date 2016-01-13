/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:01:32 by asalama           #+#    #+#             */
/*   Updated: 2015/12/09 12:09:34 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	if (!s1 && s2)
		return (ft_strdup((char*)s2));
	else if (s1 && !s2)
		return (ft_strdup((char*)s1));
	else if (!s1)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ret == NULL)
		return (NULL);
	ft_strcpy(ret, (char *)(s1));
	ft_strcat(ret, s2);
	return (ret);
}
