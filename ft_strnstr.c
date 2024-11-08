/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:50:36 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/08 13:41:45 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	if (*little == '\0')
		return ((char *)big);
	len_little = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i + len_little <= len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
		}
		if (j == len_little)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
