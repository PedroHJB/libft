/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:12:35 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/06 11:37:36 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*malloc(size_t);
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