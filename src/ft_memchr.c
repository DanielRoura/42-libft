/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:02:04 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/18 10:59:21 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;
	char	*str;
	char	chr;

	idx = 0;
	str = (char *) s;
	chr = (char) c;
	while (idx < n)
	{
		if (str[idx] == chr)
			return ((void *)&str[idx]);
		idx++;
	}
	return (0);
}
