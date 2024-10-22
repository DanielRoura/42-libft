/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:21:53 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/16 11:37:17 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_sequence(char *str, const char *to_find, size_t idx)
{
	int	jdx;

	jdx = 0;
	while (to_find[jdx] != '\0')
	{
		if (str[idx + jdx] != to_find[jdx])
			return (0);
		jdx++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx;
	size_t	little_len;
	char	*str;

	idx = 0;
	little_len = ft_strlen(little);
	str = (char *) big;
	if (little_len == 0)
		return (str);
	if (len == 0)
		return (0);
	while (str[idx] != '\0' && idx < (len - little_len + 1))
	{
		if (ft_sequence(str, little, idx))
			return (str + idx);
		idx++;
	}
	return (0);
}
