/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbosch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:46:47 by agbosch           #+#    #+#             */
/*   Updated: 2021/04/27 14:37:38 by agbosch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		ft_strdup(s1);
	i = 0;
	while (s1[i] && ft_in_set(s1[i], set))
		i++;
	len = ft_strlen(s1);
	while (len > i && ft_in_set(s1[len - 1], set))
		len--;
	str = (char *)malloc(sizeof(*s1) * (len - i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (i < len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
