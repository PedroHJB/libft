/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:14:34 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/07 16:43:06 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	size_t	lens1;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	newstring = malloc(lens1 + lens2 + 1);
	if (!newstring)
		return (NULL);
	ft_strlcpy(newstring, s1, lens1 + 1);
	ft_strlcpy(&newstring[lens1], s2, lens2 + 1);
	return (newstring);
}
