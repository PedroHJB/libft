/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:15:36 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/12 18:53:52 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_counter(const char *s, int c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (words);
}

static void	*free_all(size_t index, char **array)
{
	while (index > 0)
	{
		free(array[--index]);
	}
	free(array);
	return (NULL);
}

static char	**ft_alloc(char **array, const char *s, int c, size_t words)
{
	size_t	word_length;
	size_t	index;

	index = 0;
	while (*s && index < words)
	{
		while (*s == c)
			s++;
		word_length = 0;
		while (s[word_length] && s[word_length] != c)
			word_length++;
		array[index] = (char *)ft_calloc(word_length + 1, sizeof(char));
		if (!array[index])
			return (free_all(index, array));
		ft_strlcpy(array[index], s, word_length + 1);
		index++;
		s += word_length;
	}
	array[index] = NULL;
	return (array);
}

char	**ft_split(const char *s, int c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_word_counter(s, c);
	array = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!array)
		return (NULL);
	return (ft_alloc(array, s, c, words));
}
