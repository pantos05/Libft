/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforge <nforge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:17:44 by nforge            #+#    #+#             */
/*   Updated: 2021/10/25 17:20:06 by nforge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	if (size > 0 )
		dst[i] = '\0';
	return (ft_strlen(src));
}
