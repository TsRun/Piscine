/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:01:37 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/18 00:25:36 by maserrie         ###   ########.fr       */
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

int	ft_read_file(char *file_name, int nb, t_string *str, int *size)
{
	int		fd;
	int		len;
	char	s2[16];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (ft_error(file_name, 0));
	len = read(fd, s2, 16 - str->size);
	if (len < 0)
		return (ft_error(file_name, 1));
	ft_strncat(str->string, s2, len);
	len += str->size;
	while (len % 16 == 0 && len)
	{
		ft_print_norm(nb, str->string, 16, *size);
		len = read(fd, str->string, 16);
		*size = *size + 16;
	}
	str->size = len;
	return (0);
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
