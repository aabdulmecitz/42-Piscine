/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:04:26 by aozkaya           #+#    #+#             */
/*   Updated: 2024/01/29 16:39:15 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			put_char(a / 10 + '0');
			put_char(a % 10 + '0');
			put_char(' ');
			put_char(b / 10 + '0');
			put_char(b % 10 + '0');
			if (!(a == 98))
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
