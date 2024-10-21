/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:49:27 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/18 12:08:43 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	a[] = "testeee";
	char	d[] = "testeee";
	char	b[] = "bbbbbbbbb";
	size_t	c;

	c = 3;
	printf("%s\n", (char *)memcpy(b, a + 1, c));
	printf("%s\n", (char *)ft_memcpy(b, d + 1, c));
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t cont;

	cont = 0;

	while (cont < n)
	{
		((unsigned char *)dest)[cont] = ((const unsigned char *)src)[cont];
		cont++;
	}

	return ((unsigned char *)dest);
}