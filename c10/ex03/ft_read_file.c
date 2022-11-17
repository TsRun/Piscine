/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:01:37 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/17 01:43:11 by maserrie         ###   ########.fr       */
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
	int		i;
	int		len;
	int		fd;
	char	str[16000];

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

void	ft_read_file(char *file_name, int oct)
{
	char	*str;
	int		size;
	int		fd;

	size = size_file (file_name);
	if (size == -1)
		return ;
	str = malloc (size + 1);
	fd = open(file_name, O_RDONLY);
	read(fd, str, size);
	str[size] = 0;
	if (oct < size)
		ft_putstr(str + size - oct);
	else
		ft_putstr(str);
	free(str);
}

char	*ft_realloc_cat(char *s1, char *s2, int len)
{
	int		i;
	char	*s3;
	int		j;

	i = ft_strlen(s1);
	s3 = malloc (i + len + 2);
	j = 0;
	while (j < i)
	{
		s3[j] = s1[j];
		j++;
	}
	i = 0;
	while (i < len)
	{
		s3[i + j] = s2[i];
		i++;
	}
	s3[i + j] = '\0';
	free(s1);
	return (s3);
}

void	ft_read_input(int oct)
{
	char	str[16000];
	int		len;
	char	*res;
	int		red;

	red = 1;
	res = malloc(1);
	res[0] = '\0';
	len = 0;
	while (red > 0)
	{
		red = read(0, str, 16000);
		if (red > 0)
		{
			res = ft_realloc_cat(res, str, red);
			len += red;
		}
	}
	if (oct < len)
		ft_putstr(res + len - oct);
	else
		ft_putstr(res);
	free(res);
	return ;
}
