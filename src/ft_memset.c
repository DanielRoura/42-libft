/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:18:40 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/12 11:33:49 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	idx;
	char	*ptr;

	ptr = s;
	idx = 0;
	while (idx++ < n)
	{
		*ptr = c;
		ptr++;
	}
	return (s);
}
