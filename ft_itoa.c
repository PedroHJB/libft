/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:30:51 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/06 14:59:44 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*malloc(size_t);

#include "libft.h"

void					*malloc(size_t);

static unsigned char	*ft_conversion(unsigned char *numberc, int lennumber,
		int n)
{
	size_t	is_negative;
	long	newN;

	is_negative = 0;
	newN = n;
	if (newN < 0)
	{
		is_negative = 1;
		newN = -newN;
	}
	while (lennumber--)
	{
		numberc[lennumber] = (newN % 10) + '0';
		newN /= 10;
	}
	if (is_negative)
		numberc[0] = '-';
	return (numberc);
}

static int	ft_chekn(int newN)
{
	size_t	len;

	len = 0;
	if (newN == 0)
		return (1);
	while (newN != 0)
	{
		newN /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int newN)
{
	size_t lennumber;
	unsigned char *numberc;

	lennumber = ft_chekn(newN);
	if (newN < 0)
		lennumber += 1;

	numberc = malloc(lennumber + 1);
	if (!numberc)
		return (NULL);

	numberc[lennumber] = '\0';

	if (newN == 0)
	{
		numberc[0] = '0';
		return ((char *)numberc);
	}

	numberc = ft_conversion(numberc, lennumber, newN);
	return ((char *)numberc);
}