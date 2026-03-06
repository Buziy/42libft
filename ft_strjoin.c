/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busyigit <busyigit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 03:04:05 by busyigit          #+#    #+#             */
/*   Updated: 2026/02/04 15:29:36 by busyigit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n1;
	size_t	n2;
	char	*dest;

	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	if (s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	if (s1 && s2 == NULL)
		return (ft_strdup(s1));
	if (s1 == NULL && s2)
		return (ft_strdup(s2));
	dest = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, n1 + 1);
	ft_strlcat(dest, s2, n1 + n2 + 1);
	return (dest);
}
