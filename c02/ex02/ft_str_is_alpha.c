/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:52 by aozkaya           #+#    #+#             */
/*   Updated: 2024/02/06 12:27:52 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0' )
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| ((str[i] >= 'A' && str[i] <= 'Z'))))
			return (0);
		i++;
	}
	return (1);
}