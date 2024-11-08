/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:57:07 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/08 14:45:56 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_and_copy(const char *s, unsigned int start, size_t len)
{
	char	*newsubstring;
	size_t	count;

	newsubstring = malloc(len + 1);
	if (!newsubstring)
		return (NULL);
	count = 0;
	while (count < len && s[start + count] != '\0')
	{
		newsubstring[count] = s[start + count];
		count++;
	}
	newsubstring[count] = '\0';
	return (newsubstring);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (allocate_and_copy("", 0, 0));
	if (len > s_len - start)
		len = s_len - start;
	return (allocate_and_copy(s, start, len));
}
