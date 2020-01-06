/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:20:37 by raubert           #+#    #+#             */
/*   Updated: 2019/08/19 14:49:48 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char **src, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (k < size)
	{
		j = 0;
		while (src[k][j] != '\0')
		{
			dest[i++] = src[k][j];
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && k < size - 1)
		{
			dest[i++] = sep[j];
			j++;
		}
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strslen(char **strs, int size)
{
	int	i;
	int j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		slen;
	char	*str;
	int		i;

	slen = ((ft_strlen(sep) * (size - 1)) + (ft_strslen(strs, size) * size));
	i = 0;
	if (!(str = malloc(sizeof(str) * slen + 1)))
		return (0);
	str = ft_strcat(str, strs, sep, size);
	return (str);
}
