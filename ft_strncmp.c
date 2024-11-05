/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:26:42 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/31 13:06:59 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	unsigned char *s;
	unsigned char *ss;

	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;

	i = 0;

	if (n == 0)
		return (0);
	while (s[i] != '\0' && ss[i] != '\0' && i < n - 1)
	{
		if (s[i] != ss[i])
		{
			return (s[i] - ss[i]);
		}
		i++;
	}

	return (s[i] - ss[i]);
}