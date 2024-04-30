/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:59:51 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/12 11:10:46 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The  strchr() function returns a pointer
to the first occurrence of the
character c in the string s.

*/
char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
	{
		return ((char *)s);
	}
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (NULL);
}
