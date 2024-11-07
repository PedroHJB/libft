/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:12:35 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/07 13:06:23 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char *ptr;

	if (nelem == 0 || elsize == 0)
	{
		return (NULL);
	}

	ptr = malloc(nelem * elsize);

	if (ptr == NULL)
		return (NULL);

	ft_bzero(ptr, nelem * elsize);

	return (ptr);
}