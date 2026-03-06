/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busyigit <busyigit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 23:52:08 by busyigit          #+#    #+#             */
/*   Updated: 2026/01/31 15:06:14 by busyigit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == '\0' && c != '\0')
		return (NULL);
	return ((char *)&s[i]);
}
/* #include <stdio.h>
int main()
{
	char s[] = "BuseYiğit";
	char *p;

	p = ft_strchr(s, 's');
	printf("%s", p);
} */