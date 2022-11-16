/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:27:19 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/16 01:59:45 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnstr(char *str, int n)
{
	int	i;

	i = 0;
	while (str[i] && i < n)
		i++;
	write(1, str, n);
}

void	ft_putstrtab(char **av, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
	}
}

int	ft_strstrlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
