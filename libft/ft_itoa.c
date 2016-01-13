/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 10:44:04 by asalama           #+#    #+#             */
/*   Updated: 2015/12/07 13:34:01 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_reverse(char *s)
{
	int		i;
	int		max_len;
	char	tmp;

	i = 0;
	max_len = ft_strlen(s) - 1;
	while (i < max_len)
	{
		tmp = s[i];
		s[i] = s[max_len];
		s[max_len] = tmp;
		i++;
		max_len--;
	}
	return (s);
}

static char		*ft_next(char *s, char *ret, int n)
{
	if (n < 0)
		ret = ft_reverse(s + 1);
	else
		ret = ft_reverse(s);
	return (0);
}

char			*ft_itoa(int n)
{
	char			s[12];
	char			*ret;
	unsigned int	nbr;
	int				i;

	i = 0;
	ret = 0;
	nbr = (unsigned int)(n);
	if (n < 0)
	{
		s[i++] = '-';
		nbr = (unsigned int)(-n);
	}
	if (nbr == 0)
		s[i++] = '0';
	else
		while (nbr != 0)
		{
			s[i++] = (nbr % 10) + '0';
			nbr = nbr / 10;
		}
	s[i] = '\0';
	ft_next(s, ret, n);
	ret = ft_strdup(s);
	return (ret);
}
