/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:38:40 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/01 16:00:04 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *malloc (size_t);
void	*ft_strdup(const char *s)
{
	size_t	len;
	unsigned char *newstring;


	len = ft_strlen(s) + 1;
	
	newstring = malloc(len);

	if(!newstring)
		return NULL;

	return (unsigned char*)ft_memcpy(newstring,s,len);
	
}