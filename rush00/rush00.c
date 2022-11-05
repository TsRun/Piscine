/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:54:41 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/05 10:23:29 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int lenght, int height)
{
	int	x;
	int	y;

	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < lenght)
		{
			if (y == 0 || y == height - 1)
			{
				if (x == 0 || x == lenght - 1)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
			{
				if (x == 0 || x == lenght - 1)
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
