/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busyigit <busyigit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 23:48:30 by busyigit          #+#    #+#             */
/*   Updated: 2026/01/27 14:52:24 by busyigit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/* #include <stdio.h>

 int main()
 {
	int i;
	i = 65;
	while(i <= 90)
	{
		printf("%c\n", ft_tolower(i));
		i++;
	}
 } */