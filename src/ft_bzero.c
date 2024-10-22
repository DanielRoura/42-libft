/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:46:01 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/11 12:38:10 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	idx;
	char	*ptr;

	ptr = s;
	idx = 0;
	while (idx < n)
	{
		*ptr = '\0';
		ptr++;
		idx++;
	}
}
