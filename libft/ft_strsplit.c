/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:10:03 by asalama           #+#    #+#             */
/*   Updated: 2015/12/07 12:29:13 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_num(char const *s, char c)
{
	int	number;
	int	i;

	i = 0;
	number = 0;
	if (s[i] != c && s[i] != '\0')
		number++;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i - 1] == c && s[i] != c)
			number++;
		i++;
	}
	return (number);
}

static int		ft_len(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			count++;
		}
		if (count)
			return (count);
	}
	return (count);
}

static char		*ft_add(char *ret)
{
	if (ret == NULL)
		return (NULL);
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		word_number;
	int		i;
	int		j;
	int		len;

	ret = (char**)malloc(sizeof(char *) * (ft_num((const char *)(s), c) + 1));
	i = 0;
	j = 0;
	word_number = ft_num((const char*)(s), c);
	ft_add(*ret);
	while (word_number)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		len = ft_len((char *)(s + i), c);
		ret[j] = ft_strsub((const char *)(s + i), 0, len);
		ft_add(*ret);
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
		word_number--;
	}
	ret[j] = NULL;
	return (ret);
}
