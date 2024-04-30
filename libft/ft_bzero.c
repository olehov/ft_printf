/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:27:02 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/12 11:27:27 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fills *s with zeros
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*ptr++ = '\0';
	}
}