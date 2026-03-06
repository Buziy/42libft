/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busyigit <busyigit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:16:35 by busyigit          #+#    #+#             */
/*   Updated: 2026/03/06 23:38:29 by busyigit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_len(long nbr)
{
	int	count;

	count = 0;
	if(nbr == 0)
		count++;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static	char	*place(int len)
{
	char	*p;

	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	p[0] = '0';
	return (p);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	result = place(len);
	if (result == NULL)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr)
	{
		result[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
	{
		result[0] = '-';
	}
	result[len] = '\0';
	return (result);
}
/*#include <stdio.h>
int main()
{
	char *rslt;

	rslt = ft_itoa(-2147483648);
	printf("test: %s", rslt);
	free(rslt);
}*/

