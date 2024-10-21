/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:05:07 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/17 17:26:10 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *ptr, int value, size_t num);

int	main(void)
{
	char	source[5];
	char	source2[5];
	int		value;
	size_t	length;

	// printf("Size of: %lu\n", sizeof(source));
	// return (0);
	value = 65;
	length = 5;
	ft_memset(source, value, length);
	printf("%s\n", source);
	memset(source2, value, length);
	printf("%s\n", source2);
}

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char *p;

	p = (unsigned char *)ptr;
	while (num > 0)
	{
		*p = (unsigned char)value;
		p++;
		num--;
	}
	return (ptr);
}
