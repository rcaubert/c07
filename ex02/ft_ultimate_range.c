/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:38:58 by raubert           #+#    #+#             */
/*   Updated: 2019/08/19 12:54:15 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (-1);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
