/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busyigit <busyigit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 01:20:21 by busyigit          #+#    #+#             */
/*   Updated: 2026/02/04 16:32:17 by busyigit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0 && ++count)
			x = 1;
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

static void	*ft_free_all(char **strs, int j)
{
	while (j >= 0)
		free(strs[j--]);
	free(strs);
	return (NULL);
}

static char	**ft_fill_res(char **res, const char *s, char c)
{
	size_t	i;
	int		j;
	int		s_word;

	i = 0;
	j = 0;
	s_word = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0' && s_word < 0)
			s_word = i;
		else if ((s[i] == c || s[i] == '\0') && s_word >= 0)
		{
			res[j] = ft_substr(s, s_word, i - s_word);
			if (!res[j++])
				return (ft_free_all(res, j - 2));
			s_word = -1;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	return (ft_fill_res(res, s, c));
}
