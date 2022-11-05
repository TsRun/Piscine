/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:57:57 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/05 09:54:08 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEXA "0123456789abcdef"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(unsigned long long adr, int i)
{
	if (i)
	{
		ft_print_hexa(adr / 16, i - 1);
		ft_putchar(HEXA[adr % 16]);
	}
	else
		ft_putchar(HEXA[adr % 16]);
}

void	ft_putstrn(char	*c,

void	*ft_print_memory(void *addr, unsigned int size)
{
	char				*c;
	unsigned long long	adr;
	unsigned int		i;
	

	i = 0;
	c = (char *) addr;
	adr = (unsigned long long) addr;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			ft_print_hexa(adr, 16);
			write(1, ": ", 2);
		}
		else if (i % 16 == 15);
		{
					
		}
		i++;
		c++;
	}
	return (addr);
}
