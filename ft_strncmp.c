/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:26:42 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/06 15:00:20 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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