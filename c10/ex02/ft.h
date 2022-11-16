/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:44:50 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/16 14:47:19 by maserrie         ###   ########.fr       */
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

int		ft_error(char *str, int i);
void	ft_puterror(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_read_file(char *str, int oct);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_atoi2(char *str);
char	**ft_split(char *str, char *sep);
void	ft_putchar(char c);
void	ft_putnstr(char *str, int n);

#endif
