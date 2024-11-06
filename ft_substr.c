/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:57:07 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/06 15:00:35 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*malloc(size_t);
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *newsubstring;
	size_t cont;
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

	// Copia os caracteres da string original para a substring
	cont = 0;
	while (cont < len && s[start + cont] != '\0')
	{
		newsubstring[cont] = s[start + cont];
		cont++;
	}
	newsubstring[cont] = '\0';

	return (newsubstring);
}