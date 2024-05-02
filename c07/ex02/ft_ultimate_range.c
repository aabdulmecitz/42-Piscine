/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:34:21 by aozkaya           #+#    #+#             */
/*   Updated: 2024/02/13 17:14:45 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*rangeserie;
	int	i;

	i = 0;
	if (min >= max)
	{
		rangeserie = NULL;
		*range = rangeserie;
		return (0);
	}
	rangeserie = (int *)malloc(sizeof(*rangeserie) * (max - min) + 1);
	while (min < max)
	{
		rangeserie[i] = min;
		min++;
		i++;
	}
	*range = rangeserie;
	return (i);
}
