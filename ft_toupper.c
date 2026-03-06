/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busyigit <busyigit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:41:32 by busyigit          #+#    #+#             */
/*   Updated: 2026/01/27 14:50:38 by busyigit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -32);
	return (c);
}

/* #include <stdio.h>

 int main()
 {
	int i;
	i = 97;
	while(i <= 122)
	{
		printf("%c\n", ft_toupper(i));
		i++;
	}
 }
 */
