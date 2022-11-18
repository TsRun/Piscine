/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:13:54 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/18 17:33:24 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
#include <unistd.h>

void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
t_list	*ft_create_elem(void *data);
t_list	*ft_list_push_strs(int size, char **av);
void ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list  *ft_list_at(t_list *begin_list, unsigned int nbr);

void	ft_free(void *t)
{
	free(t);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_put_struct(t_list *begin)
{
	while (begin)
	{
		ft_putstr(begin->data);
		ft_putstr("\n");
		begin = begin->next;
	}
}

int	main(int ac, char **av)
{
	t_list	**begin;

	begin = malloc (sizeof(t_list *));
	*begin = ft_list_push_strs(ac - 1, av + 1);
	printf("%p\n", ft_list_at(*begin, 6));
	ft_putstr("\n");
	ft_list_clear(*begin, &ft_free);
	free(begin);
	return (0);
}
