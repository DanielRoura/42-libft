/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:10:16 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/17 14:19:00 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	**ft_split_free(int split_idx, char **split)
{
	while (split_idx > 0)
	{
		free(split[split_idx - 1]);
		split_idx--;
	}
	free(split);
	return (NULL);
}

static char	**find_words(int idx, char **split, char const *str, char sep)
{
	int		start;
	int		split_idx;
	char	*word;

	start = -1;
	split_idx = 0;
	while (idx <= (int) ft_strlen(str))
	{
		if (start != -1 && (str[idx] == sep || str[idx] == '\0') && idx > start)
		{
			word = ft_substr(str, start, idx - start);
			if (!word)
				return (ft_split_free(split_idx, split));
			split[split_idx] = word;
			split_idx++;
			start = -1;
		}
		else if (str[idx] != sep && start == -1)
			start = idx;
		idx++;
	}
	split[split_idx] = 0;
	return (split);
}

static int	count_words(int idx, char const *str, char sep)
{
	int		words;
	int		strlen;

	strlen = (int) ft_strlen(str);
	if (strlen == 1 && str[0] != sep)
		return (1);
	words = 0;
	while (idx <= strlen)
	{
		if ((str[idx] == sep || !str[idx]) && str[idx - 1] != sep)
			words++;
		idx++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	size;

	if (!s)
		return (NULL);
	size = count_words(1, s, c) + 1;
	split = malloc(sizeof(char *) * (size));
	if (!split)
		return (NULL);
	if (!find_words(0, split, s, c))
		return (NULL);
	return (split);
}
