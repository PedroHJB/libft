/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:26:42 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/08 15:48:39 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*string;
	unsigned char	*string2;

	string = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (string[i] != '\0' && string2[i] != '\0' && i < n - 1)
	{
		if (string[i] != string2[i])
		{
			return (string[i] - string2[i]);
		}
		i++;
	}
	return (string[i] - string2[i]);
}
