/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:08:57 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/08 15:47:31 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*string;
	const unsigned char	*string2;

	string = (const unsigned char *)s1;
	string2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (string[i] != string2[i])
			return (string[i] - string2[i]);
		i++;
	}
	return (0);
}
