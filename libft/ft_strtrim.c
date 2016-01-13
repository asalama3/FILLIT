/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:13:53 by asalama           #+#    #+#             */
/*   Updated: 2015/12/04 18:01:54 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*ret;
	int		max_len;
	int		k;

	k = 0;
	i = 0;
	max_len = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\v' ||
			s[i] == '\f' || s[i] == '\r')
		i++;
	if (i > max_len)
		return (ft_strdup(""));
	while (s[max_len] == ' ' || s[max_len] == '\n' || s[max_len] == '\t' ||
			s[max_len] == '\v' || s[max_len] == '\f' || s[max_len] == '\r')
		max_len--;
	ret = (char*)malloc(sizeof(char) * max_len - i);
	if (ret == NULL)
		return (NULL);
	while (i <= max_len)
		ret[k++] = s[i++];
	ret[k] = '\0';
	return (ret);
}
