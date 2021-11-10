/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforge <nforge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:17:44 by nforge            #+#    #+#             */
/*   Updated: 2021/10/25 17:20:06 by nforge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_nbr_word(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str != '\0')
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

void	ft_free(char **mas)
{
	int	i;

	i = 0;
	while (mas[i])
	{
		free(mas[i]);
		i++;
	}
	free(mas);
}

size_t	ft_word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str == c)
		str++;
	while (*str && *str != c)
	{
		i++;
		str++;
	}
	return (i);
}

char	**ft_pre_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;

	if (!s)
		return (NULL);
	i = ft_nbr_word(s, c);
	str = ft_calloc(i + 1, sizeof(char *));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (i > j)
	{
		while (*s == c)
			s++;
		str[j] = ft_substr(s, 0, ft_word_len (s, c));
		if (str[j++] == NULL)
		{
			ft_free(str);
			return (NULL);
		}
		s += ft_word_len(s, c);
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = ft_pre_split(s, c);
	if (!str)
		return (NULL);
	return (str);
}
