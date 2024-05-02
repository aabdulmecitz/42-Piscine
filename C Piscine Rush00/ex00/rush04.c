/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkablan <tkablan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:56:45 by tkablan           #+#    #+#             */
/*   Updated: 2024/01/28 23:22:37 by tkablan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int len, char first, char middle, char last)
{
	int	letter;

	letter = 1;
	while (letter <= len)
	{
		if (letter == 1)
			ft_putchar(first);
		else if (letter == len)
			ft_putchar(last);
		else
			ft_putchar(middle);
		letter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x >= 1 && y >= 1)
	{
		while (line <= y)
		{
			if (line == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (line == y)
				ft_print(x, 'C', 'B', 'A');
			else
				ft_print(x, 'B', ' ', 'B');
			line ++;
		}
	}
	else
		write(1, "ERROR", 5);
}
