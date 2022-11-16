/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:14:09 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/16 02:04:44 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_error(char *file_name, int i)
{
	if (i == 0)
		ft_puterror("tail: cannot open \'");
	else
		ft_put
	ft_puterror(basename(file_name));
	if (i == 0)
		ft_puterror("\' for reading: ");
	else
		ft_puterror("\': ");
	ft_puterror(strerror(errno));
	ft_puterror("\n");
	return (-1);
}
