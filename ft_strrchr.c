/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:07:31 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/17 15:02:02 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*str = "Hello, world!";
	char		*last_occurrence;

	last_occurrence = strrchr(str, 'o');
	if (last_occurrence != NULL)
	{
		printf("Última ocorrência de 'o': %s\n", last_occurrence);
	}
	else
	{
		printf("Caractere 'o' não encontrado.\n");
	}
	return (0);
}
char	*ft_strrchr(const char *str, int c)
{
	const char *last_ocurrence = NULL;

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