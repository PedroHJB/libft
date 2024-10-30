/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:50:36 by pede-jes          #+#    #+#             */
/*   Updated: 2024/10/30 17:23:25 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// }

int	chekstring(char *big, char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	i = 0;
	if (*big == '\0')
		return (0);
	if (*little == '\0')
		return (0);
	while (*big++ && len--)
	{
		if (*little == '\0')
			return (0);
		if (*big == *little)
		{
			if(chekstring((char*)big, (char*)little, len))
			{
				return (char*)big;	
			}
		}
		little++;
	}
	return ((char *)big);
}

int	chekstring(char *big, char *little, size_t len)
{
	size_t lencoppy;
	char *bufferbig;
	char *bufferlittle;

	bufferbig = big;
	bufferlittle= little;
	lencoppy = len;

	while (bufferbig++ && bufferlittle++ && lencoppy--)
	{
		if (*bufferbig != *bufferlittle)
			return (0);
	}
	if (*bufferlittle == '\0')
		return (1);

	return 0;
}