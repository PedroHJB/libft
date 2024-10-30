/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:46:29 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/30 16:42:46 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// 	int main(void)
// {
// 	char	a[50] = "abracadabra";
// 	char	b[] = "Roberson";

// 	printf("Return: %zu\n", ft_strlcat(a, b, 50));
// 	printf("Return: %s\n", b);
// 	printf("Return: %s\n", a);
// }
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t	sizedest;
    size_t	sizesrc;
    size_t 	cont;

    sizedest = ft_strlen(dest);
    sizesrc = ft_strlen(src);

    if (size <= sizedest)
        return (size + sizesrc);

    cont = 0;
    while (src[cont] != '\0' && (sizedest + cont) < (size - 1))
    {
        dest[sizedest + cont] = src[cont];
        cont++;
    }
    
    dest[sizedest + cont] = '\0';

    return (sizedest + sizesrc);
}

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}
