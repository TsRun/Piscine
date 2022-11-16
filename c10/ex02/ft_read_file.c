/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:01:37 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/16 01:55:38 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	size_file(char *file_name)
{
	int	i;
	int	len;
	int	fd;
	char str[16000];

	i = 0;
	len = 1;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (ft_error(file_name, 0));
	while (len)
	{
		len = read(fd, str, 16000);
		if (len < 0)
			return (ft_error(file_name, 1));
		i += len;
	}
	if (close(fd) == -1)
		return (ft_error(file_name, 0));
	return (i);
}

char	*ft_read_file(char *file_niame, int oct)
{
	char	*str;
	int		size;
	int		fd;

	size = size_file (file_name);
	if (size == -1)
		return (0);
	str = malloc (size + 1);
	fd = open(file_name, O_RDONLY);
	read(fd, str, size);
	str[size] = 0;
	if 
	ft_putstr(str + size - oct);
	return (str);
}
