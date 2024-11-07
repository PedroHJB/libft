/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:46:29 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/07 12:08:36 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sizedest;
	size_t	sizesrc;
	size_t	count;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	if (size <= sizedest)
		return (size + sizesrc);
	count = 0;
	while (src[count] != '\0' && (sizedest + count) < (size - 1))
	{
		dest[sizedest + count] = src[count];
		count++;
	}
	dest[sizedest + count] = '\0';
	return (sizedest + sizesrc);
}

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}
