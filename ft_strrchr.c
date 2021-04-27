/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbosch <agbosch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:03:12 by agbosch           #+#    #+#             */
/*   Updated: 2021/01/13 10:23:48 by agbosch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(str);
	while (*str && len >= 0)
	{
		if (str[len] == c)
			return (&str[len]);
		len--;
	}
	if (!*str && !c)
		return (str);
	return (NULL);
}
