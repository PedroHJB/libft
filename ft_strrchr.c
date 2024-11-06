/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:07:31 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/06 19:02:20 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;
	char	*end;

	len = ft_strlen(str);
	end = (char *)(str + len);
	while (end != str && *end != (unsigned char)c)
		end--;
	if (*end == (unsigned char)c)
		return (end);
	return (NULL);
}
