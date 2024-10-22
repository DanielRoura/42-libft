/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:42:12 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/17 10:03:17 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	idx;
	size_t	s_len;
	size_t	size;
	char	*substr;

	idx = 0;
	s_len = ft_strlen(s);
	if (start > s_len)
		size = 1;
	else if ((s_len - start + 1) <= len)
		size = s_len - start + 1;
	else
		size = len + 1;
	substr = malloc(sizeof(char) * size);
	if (!substr)
		return (substr);
	while (s[idx] != '\0' && (idx + start) < s_len && idx < len)
	{
		substr[idx] = s[idx + start];
		idx++;
	}
	substr[idx] = '\0';
	return (substr);
}
