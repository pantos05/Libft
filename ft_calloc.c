/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforge <nforge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:17:44 by nforge            #+#    #+#             */
/*   Updated: 2021/10/25 17:20:06 by nforge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*arr;

	if (!size || !num)
	{
		size = 1;
		num = 1;
	}
	arr = malloc(size * num);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * num);
	return (arr);
}
