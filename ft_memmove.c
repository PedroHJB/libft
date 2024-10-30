/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:26:52 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/23 19:29:12 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>


void	*ft_memmove(void *dest, const void *src, size_t n);

// int	main(void)
// {
// 	char	a[] = "testeee";
// 	char	d[] = "testeee";
// 	char	b[] = "bbbbbbbbb";
// 	size_t	c;

// 	c = 5;
// 	printf("%s\n", (char *)memmove(b, a , c));
// 	 printf("%s\n", (char*)ft_memmove(b, d , c));
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    if (d < s)
    {
        while (n--)
        {
            *d++ = *s++;
        }
    }
    else
    {
        const unsigned char *lasts;
        unsigned char *lastd;

        lasts = s + (n - 1);
        lastd = d + (n - 1);

        while (n--)
        {
            *lastd-- = *lasts--;
        }
    }

    return dest;
}

