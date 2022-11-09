/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:21:05 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/09 10:41:30 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = min;
	if (min >= max)
		return (0);
	tab = malloc (max - min);
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	return (tab);
}
