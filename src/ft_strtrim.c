/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:58:53 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/17 12:04:08 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	ft_strtrim_findchr(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	idx_1;
	size_t	idx_2;
	char	*str;

	if (!s1)
		return (0);
	if (!set || !*set)
		return (ft_strdup(s1));
	idx_1 = 0;
	while (s1[idx_1] && ft_strtrim_findchr(s1[idx_1], set))
		idx_1++;
	idx_2 = ft_strlen(s1) - 1;
	if (s1[idx_1] == '\0')
		return (ft_strdup(""));
	while (s1[idx_1] && ft_strtrim_findchr(s1[idx_2], set))
		idx_2--;
	str = malloc(sizeof(char) * (idx_2 - idx_1 + 1 + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + idx_1, idx_2 - idx_1 + 1 + 1);
	return (str);
}
