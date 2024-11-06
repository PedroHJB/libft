/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:15:36 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/06 15:00:02 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	unsigned char *conts;
	unsigned char *i;
	unsigned char *newstring;

	conts = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (conts == c)
			conts++;

		i++;
	}

	newstring = malloc(conts + 1);
}