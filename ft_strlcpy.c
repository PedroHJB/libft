/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:05:16 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/31 13:34:03 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	str_len;
	size_t	i;

	i = 0;
	str_len = 0;
	if (*src == '\0')
	{
		dst[i] = '\0';
		return (0);
	}
	while (src[str_len] != '\0')
	{
		str_len++;
	}
	if (size > 0)
	{
		while (i < str_len && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (str_len);
}
