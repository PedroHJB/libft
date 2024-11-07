/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:30:51 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/07 16:45:35 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*ft_conversion(unsigned char *numberc, int lennumber,
		int n)
{
	size_t	is_negative;
	long	new_n;

	is_negative = 0;
	new_n = n;
	if (new_n < 0)
	{
		is_negative = 1;
		new_n = -new_n;
	}
	while (lennumber--)
	{
		numberc[lennumber] = (new_n % 10) + '0';
		new_n /= 10;
	}
	if (is_negative)
		numberc[0] = '-';
	return (numberc);
}

static int	ft_chekn(int new_n)
{
	size_t	len;

	len = 0;
	if (new_n == 0)
		return (1);
	while (new_n != 0)
	{
		new_n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int new_n)
{
	size_t			lennumber;
	unsigned char	*numberc;

	lennumber = ft_chekn(new_n);
	if (new_n < 0)
		lennumber += 1;
	numberc = malloc(lennumber + 1);
	if (!numberc)
		return (NULL);
	numberc[lennumber] = '\0';
	if (new_n == 0)
	{
		numberc[0] = '0';
		return ((char *)numberc);
	}
	numberc = ft_conversion(numberc, lennumber, new_n);
	return ((char *)numberc);
}
