/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:45:00 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/17 01:24:23 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_create_elem(char *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (0);
	elem->str = data;
	elem->next = 0;
	return (elem);
}

t_list	*str_modif(char **av, int ac)
{
	t_list	*tab;
	t_list	*start;
	int		i;

	i = 0;
	tab = ft_create_elem(av[i]);
	while (i < ac - 1)
	{
		tab->next = ft_create_elem(av[i + 1]);
		if (i == 0)
			start = tab;
		tab = tab->next;
		i++;
	}
	tab = ft_create_elem(0);
	tab->next = 0;
	return (start);
}

t_list	*ft_c2(t_list *list, t_list *elem, t_number *nb)
{
	int			i;
	char		*str;

	if (ft_cmp(list->str) == 2)
	{
		if (list->next == 0)
			return (ft_error2(list, 0, ""));
		list = list->next;
		str = list->str;
		elem->next = list->next;
		i = 2;
	}
	else
	{
		str = list->str + 2;
		elem->next = list->next;
		i = 1;
	}
	*nb = ft_atoi2(str);
	if (nb->test == 0)
		return (ft_error2(list, i, str));
	return (list);
}

int	ft_c_option(t_list *list)
{
	t_list		*elem;
	t_number	*nb;
	int			oct;

	elem = list;
	nb = malloc(sizeof (t_number));
	nb->n = -1;
	while (list)
	{
		if (ft_cmp(list->str))
		{
			list = ft_c2(list, elem, nb);
			if (!list)
				return (-1);
		}
		else
			elem = list;
		list = list->next;
	}
	oct = nb->n;
	free(nb);
	return (oct);
}
