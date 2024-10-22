/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:39:50 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/16 13:36:14 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	idx;
	size_t	jdx;

	idx = ft_strlen(dst);
	jdx = 0;
	if (size == 0 || size <= idx)
		return (size + ft_strlen(src));
	while (src[jdx] != '\0' && jdx < (size - idx - 1))
	{
		dst[idx + jdx] = src[jdx];
		jdx++;
	}
	dst[idx + jdx] = '\0';
	return (idx + ft_strlen(src));
}
