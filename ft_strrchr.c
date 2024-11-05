/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:07:31 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/31 12:14:47 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_ocurrence = NULL;

	while (*str)
	{
		if (*str == (char)c)
			last_ocurrence = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)last_ocurrence);
}
