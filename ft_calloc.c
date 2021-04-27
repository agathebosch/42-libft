/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbosch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 14:25:04 by agbosch           #+#    #+#             */
/*   Updated: 2021/04/24 00:08:25 by agbosch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	i;

	dst = (char *)malloc(count * size);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
