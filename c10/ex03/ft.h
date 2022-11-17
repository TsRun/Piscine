/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:44:50 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/18 00:22:26 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <libgen.h>
# include <stdlib.h>

typedef struct s_number
{
	int	n;
	int	test;
}	t_number;

typedef struct s_list
{
	char			*str;
	struct s_list	*next;
}	t_list;

typedef struct s_string
{
	char	*string;
	int		size;
}	t_string;

t_list		*ft_error2(t_list *list, int n, char *str);
int			ft_error(char *str, int i);
void		ft_puterror(char *str);
int			ft_strlen(char *str);
void		ft_putstr(char *str);
int			ft_read_file(char *file, int oct, t_string *str, int *size);
void		ft_putnbr(int nb);
int			ft_atoi(char *str);
t_number	ft_atoi2(char *str);
char		**ft_split(char *str, char *sep);
void		ft_putchar(char c);
void		ft_putnstr(char *str, int n);
int			ft_cmp(char *str);
t_list		*str_modif(char **av, int ac);
void		ft_free_struct(t_list *yo);
int			ft_c_option(t_list *list);
void		ft_put_struct(t_list *list);
void		ft_read_input(int oct);
void		ft_print_norm(int c, char *str, int d, int e);
void		ft_strncat(char *s1, char *s2, int len);

#endif
