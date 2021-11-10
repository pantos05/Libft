/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforge <nforge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:17:44 by nforge            #+#    #+#             */
/*   Updated: 2021/10/25 17:20:06 by nforge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sour;

	dest = (unsigned char *)destination;
	sour = (unsigned char *)source;
	i = 0;
	if (dest == sour)
		return (dest);
	while (i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	return (dest);
}
