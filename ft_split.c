/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbosch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:20:00 by agbosch           #+#    #+#             */
/*   Updated: 2021/04/27 14:37:23 by agbosch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static char	*ft_strdup2(char const *str, char c)
{
	char	*str2;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	str2 = (char *)malloc(sizeof(char) * (i + 1));
	if (!str2)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] && s[j] == c)
			j++;
		tab[i++] = ft_strdup2(s + j, c);
		while (s[j] && s[j] != c)
			j++;
	}
	tab[i] = NULL;
	return (tab);
}
