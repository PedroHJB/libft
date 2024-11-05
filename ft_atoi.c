/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:55:29 by pede-jes          #+#    #+#             */
/*   Updated: 2024/11/01 14:50:55 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c);

int	ft_atoi(const char *nptr)
{
	int		i;
	int		number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;

	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || 
		   nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;

	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}

	while (nptr[i] != '\0' && isdigit(nptr[i]))  
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}

	return (number * sign);
}
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1024);
	}
	else
	{
		return (0);
	}
}
