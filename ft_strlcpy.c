/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:05:16 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/17 14:58:41 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	a[] = "aaaaaaa";
	char	b[] = "bbbbbbbbbb";

	printf("%zu", ft_strlcpy(a, b, 4));
	printf("%s", a);
}


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	str_len;
	int		i;

	i = 0;
	str_len = 0;
	while (src[str_len] != '\0')
	{
		str_len++;
	}
	if (size > 0)
	{
		while (dst[i] != '\0' && i < str_len - 1 && i < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (str_len);
}
