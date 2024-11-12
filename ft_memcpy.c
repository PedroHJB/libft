/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:49:27 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/12 14:13:13 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	if ((unsigned char *)dest == (unsigned char *)src)
		return (dest);
	count = 0;
	while (count < n)
	{
		((unsigned char *)dest)[count] = ((const unsigned char *)src)[count];
		count++;
	}
	return ((unsigned char *)dest);
}
