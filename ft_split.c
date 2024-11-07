/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:15:36 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/07 16:11:00 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_alloc(char **array, const char *s, int c);
static size_t	ft_word_counter(const char *s, int c);

char	**ft_split(const char *s, int c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_word_counter(s, c);
	array = (char **)ft_calloc((words +1 ), sizeof(char *));
	if (!array)
		return (NULL);
	while (*s == (unsigned char)c && *s)
		s++;
	ft_alloc(array, s, c);
	return (array);
}

static size_t	ft_word_counter(const char *s, int c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s != c && *s)
				s++;
		}
		if (*s == '\0')
			return (words);
		s++;
	}
	return (words);
}

static char	**ft_alloc(char **array, const char *s, int c)
{
	size_t current_word_counter;
	size_t index;

	index = 0;
	while (*s)
	{
		current_word_counter = 0;
		while (s[current_word_counter] != c && s[current_word_counter])
			current_word_counter++;
		array[index] = (char *)ft_calloc((current_word_counter + 1),
				sizeof(char));
		ft_strlcpy(array[index], s, current_word_counter + 1);
		index++;
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	array[index] = NULL;
	return (array);
}