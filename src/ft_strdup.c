/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:02:57 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/12 15:11:54 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	length;	

	length = ft_strlen(s);
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (ptr);
	ft_memcpy(ptr, s, length);
	ptr[length] = '\0';
	return (ptr);
}
