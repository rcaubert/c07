/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:45:17 by raubert           #+#    #+#             */
/*   Updated: 2019/08/19 12:53:26 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int	i;

	i = 0;
	if (min >= max)
		return (tab = NULL);
	if (!(tab = malloc(sizeof(tab) * (max - min))))
		return (0);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
