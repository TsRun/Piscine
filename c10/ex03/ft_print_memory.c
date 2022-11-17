/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:57:57 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/18 00:29:01 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define HEXA "0123456789abcdef"

void	ft_put_hexa(unsigned int adr, int i)
{
	if (i > 1)
	{
		ft_put_hexa(adr / 16, i - 1);
		ft_putchar(HEXA[adr % 16]);
	}
	else
		ft_putchar(HEXA[adr % 16]);
}

void	ft_put_space(int n)
{
	while (n > 0)
	{
		ft_putchar(' ');
		n--;
	}
}

void	ft_putsuite(char *str, int size)
{
	int	i;

	i = 0;
	ft_putchar('|');
	while (i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putstr("|\n");
}

void	ft_print_norm(int nb, char *str, int size, int k)
{
	int	i;

	i = 0;
	if (nb > 1)
		ft_print_norm(nb - 1, str, size, k);
	ft_put_hexa(k, 8);
	while (i < size)
	{
		ft_putchar(' ');
		if (i % 8 == 0)
			ft_putchar(' ');
		ft_put_hexa(str[i], 2);
		i++;
	}
	if (size > 0)
		ft_put_space((16 - size) * 3 + 2 + (size < 8));
	if (size > 0)
		ft_putsuite(str, size);
	else
		ft_putstr("\n");
}
