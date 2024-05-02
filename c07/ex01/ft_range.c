/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:12:05 by aozkaya           #+#    #+#             */
/*   Updated: 2024/02/13 17:13:15 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = NULL;
	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(*range) * (max - min) + 1);
	while (min < max)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}
