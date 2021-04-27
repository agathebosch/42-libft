/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbosch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:52:32 by agbosch           #+#    #+#             */
/*   Updated: 2021/04/27 14:37:50 by agbosch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_nbrlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	int				len;
	int				i;

	nbr = n;
	len = ft_get_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		nbr *= -1;
		str[0] = '-';
		i++;
	}
	str[len] = '\0';
	while (--len >= i)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
