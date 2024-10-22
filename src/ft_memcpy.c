/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:48:24 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/18 11:00:17 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*d;

	if (!dest && !src)
		return (NULL);
	d = dest;
	idx = 0;
	while (idx < n)
	{
		d[idx] = ((unsigned char *) src)[idx];
		idx++;
	}
	return ((void *)dest);
}
