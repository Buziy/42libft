/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busyigit <busyigit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:30:34 by busyigit          #+#    #+#             */
/*   Updated: 2026/01/27 18:38:09 by busyigit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*b;
	size_t	n;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	n = ft_strlen(s);
	b = (char *)malloc(sizeof(char) * (n + 1));
	if (b == NULL)
		return (NULL);
	while (i < n)
	{
		b[i] = (*f)(i, s[i]);
		i++;
	}
	b[i] = 0;
	return (b);
}
/* char test(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		if (c >= 'a' && c <= 'z') 
			return (c - 32);      
	}
	return (c); 
}

int main(void)
{
	char    *original = "merhaba";
	char    *result;

	printf("before: %s\n", original);

	result = ft_strmapi(original, test);

	printf("after:  %s\n", result);

	free(result);

	return (0);
} */
