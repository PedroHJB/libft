/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:59:39 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/01 11:33:54 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



size_t	ft_strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}