/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:30:51 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/05 15:03:49 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*malloc(size_t);

static char	*ft_conversion(char *numberc, int lennumber, unsigned int n)
{
	while (lennumber--)
	{
		numberc[lennumber] = (n % 10) + '0';
		n /= 10;
	}
	return (numberc);
}

static int	ft_chekn(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				lennumber;
	char			*numberc;
	unsigned int	nb;
	char			*converted;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	lennumber = ft_chekn(n);
	if (n < 0)
	{
		nb = -n;
		numberc = malloc(lennumber + 1);
		if (!numberc)
			return (NULL);
		numberc[0] = '-';
	}
	else
	{
		nb = n;
		numberc = malloc(lennumber + 1);
		if (!numberc)
			return (NULL);
	}
	numberc[lennumber] = '\0';
	if (n < 0)
	{
		numberc++;
		lennumber--;
	}
	converted = ft_conversion(numberc, lennumber, nb);
	if (n < 0)
		return (converted - 1);
	return (converted);
}
