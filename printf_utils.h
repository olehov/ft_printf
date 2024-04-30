/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:29:36 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/24 17:29:38 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_UTILS_H
# define PRINTF_UTILS_H

# include "libft/libft.h"

int	ft_puthex(unsigned int numb, char *hexbuf);
int	ft_putstr(char *s, int fd);
int	ft_putchar(char c, int fd);
int	ft_putnumb_u(unsigned int n, int fd);
int	ft_putnumb(int n, int fd);
int	ft_putpointer(void *ptr);

#endif
