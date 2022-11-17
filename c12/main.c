/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:13:54 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/17 20:42:33 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

t_list	*ft_create_elem(void *data);

void	ft_put_struct(t_list *begin)
{
	while (begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}
}

int	main(int ac, char **av)
{
	int 	i;
	t_list	*begin;
	t_list	list;

	i = 0;
	begin = ft_create_elem(
	while (i < ac)
	{
		ft_create_elem
	}
}
