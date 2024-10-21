/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:05:29 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/17 16:04:27 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*str = "abobora doce";
	const char	*strtwo = "abobora doce";
	char		character;
	char		*first_occurrence;

	character = 'd';
	first_occurrence = ft_strchr(str, character);
	if (first_occurrence != NULL)
	{
		printf("A primeira ocorrência de '%c' está na posição: %ld\n",
			character, first_occurrence - str);
		printf("A partir dessa posição: %s\n", first_occurrence);
	}
	else
	{
		printf("O caractere '%c' não foi encontrado.\n", character);
	}
}

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
