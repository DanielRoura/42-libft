/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:55:44 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/17 10:01:39 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strjoin = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!strjoin)
		return (0);
	ft_strlcpy(strjoin, s1, s1_len + 1);
	if (s2_len > 0)
		strjoin[s1_len] = 0;
	ft_strlcat(strjoin, s2, s1_len + s2_len + 1);
	return (strjoin);
}
