/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:09:15 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/12 13:58:03 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				idx;
	unsigned char	chr;

	chr = c;
	if (!ft_isascii(chr))
		return ((char *) s);
	idx = ft_strlen(s);
	while (idx >= 0)
	{
		if (s[idx] == chr)
			return ((char *)&s[idx]);
		idx--;
	}
	return (0);
}
