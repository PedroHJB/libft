/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:44:37 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/12 18:51:36 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	s_len;
	size_t	index;

	index = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	new_str = ft_calloc(s_len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (index < s_len)
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	new_str[s_len] = '\0';
	return (new_str);
}
