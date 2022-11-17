/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:14:09 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/17 16:22:31 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_error(char *file_name, int i)
{
	if (i == 0)
		ft_puterror("tail: cannot open \'");
	else if (i == 1)
		ft_puterror("tail: error reading \'");
	ft_puterror(basename(file_name));
	if (i == 0)
		ft_puterror("\' for reading: ");
	else if (i == 1)
		ft_puterror("\': ");
	if (i != 2)
		ft_puterror(strerror(errno));
	ft_puterror("\n");
	return (-1);
}

t_list	*ft_error2(t_list *list, int n, char *str)
{
	if (n == 0)
	{
		ft_puterror("tail: option requires an argument -- ‘c’\n");
		return (0);
	}
	ft_puterror("tail: invalid number of bytes: ‘");
	ft_puterror(basename(str));
	ft_puterror("’\n");
	free(list);
	return (0);
}
