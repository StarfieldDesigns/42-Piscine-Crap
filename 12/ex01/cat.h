/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:24:55 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/11 19:06:33 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# define BUF_SIZE 33333

int		ft_display_file(char **argv);
void	ft_putstr(int fd, char *str);
void	ft_putchar(int fd, char c);
void	ft_putnbr(int nbr);
#endif
