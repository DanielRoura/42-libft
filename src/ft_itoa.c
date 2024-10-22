/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:11:55 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/18 10:38:44 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_itoa_num_len(int n)
{
	if (n == -2147483648)
		return (2 + ft_itoa_num_len(-(n / 10)));
	else if (n < 0)
		return (1 + ft_itoa_num_len(-n));
	else if (n <= 9)
		return (1);
	else
		return (1 + ft_itoa_num_len(n / 10));
}

static void	ft_itoa_gen_num(char *num, int n, int len)
{
	size_t	idx;

	idx = 0;
	if (n == -2147483648)
	{
		num[0] = '-';
		num[1] = '2';
		n = 147483648;
		idx += 2;
		len += 2;
	}
	else if (n < 0)
	{
		num [0] = '-';
		idx += 1;
		len += 1;
		n *= -1;
	}
	while (n > 0)
	{
		num[len - idx - 1] = (n % 10) + '0';
		idx++;
		n /= 10;
	}
	num[idx] = '\0';
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;

	len = ft_itoa_num_len(n);
	num = ft_calloc(len + 1, sizeof(char));
	if (!num)
		return (0);
	if (n == 0)
	{
		num[0] = '0';
		num[1] = '\0';
	}
	else
		ft_itoa_gen_num(num, n, len);
	return (num);
}
