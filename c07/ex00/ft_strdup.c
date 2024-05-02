/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:43:24 by aozkaya           #+#    #+#             */
/*   Updated: 2024/02/14 13:03:42 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*clonedsrc;

	clonedsrc = (char *)malloc((ft_strlen (src) + 1) * sizeof(char));
	if (clonedsrc == NULL)
		return (NULL);
	i = 0;
	while (src[i] != 0)
	{
		clonedsrc[i] = src[i];
		i++;
	}
	clonedsrc[i] = 0;
	return (clonedsrc);
}
