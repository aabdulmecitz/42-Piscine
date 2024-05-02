/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:51:31 by aozkaya           #+#    #+#             */
/*   Updated: 2024/02/14 13:36:53 by aozkaya          ###   ########.fr       */
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

int	ft_size_of_all(int size, char **strs, char *sep)
{
	int	i;
	int	t;
	int	s;

	i = 0;
	s = size;
	while (0 < size)
	{
		t = 0;
		while (strs[size - 1][t] != 0)
		{
			i++;
			t++;
		}
		size--;
	}
	i += ft_strlen(sep) * (s - 1);
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size <= 0)
		return (NULL);
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	str = (char *)malloc(ft_size_of_all(size, strs, sep) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
