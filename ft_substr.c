/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:57:07 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/07 12:09:08 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*malloc(size_t);
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *newsubstring;
	size_t count;
	size_t s_len;

	if (!s)
		return (NULL);

	s_len = strlen(s);

	if (start >= s_len)
	{
		newsubstring = malloc(1);
		if (newsubstring)
			newsubstring[0] = '\0';
		return (newsubstring);
	}

	if (len > s_len - start)
		len = s_len - start;

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