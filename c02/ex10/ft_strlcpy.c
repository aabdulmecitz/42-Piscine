/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:06:21 by aozkaya           #+#    #+#             */
/*   Updated: 2024/02/05 14:39:09 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	src_length = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != 0 && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (src_length);
}
