/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogrativ <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:28:42 by ogrativ           #+#    #+#             */
/*   Updated: 2024/04/12 11:28:57 by ogrativ          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check if "c" is aplhabetic or numeric character
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}
