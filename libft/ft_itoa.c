/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 01:08:44 by lbarzant          #+#    #+#             */
/*   Updated: 2024/11/25 22:50:37 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill(char *d, int n, int i)
{
	if (n < 0)
	{
		d[0] = '-';
		n = -n;
	}
	else if (n == 0)
		d[0] = '0';
	while (n > 0)
	{
		d[i--] = (n % 10) + 48;
		n /= 10;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	int		digit;
	int		num;
	char	*d;

	num = n;
	digit = 1;
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	if (num < 0)
	{
		digit++;
		num = -num;
	}
	while (num > 9)
	{
		num /= 10;
		digit++;
	}
	d = ft_calloc(digit + 1, sizeof(char));
	if (!d)
		return (NULL);
	return (fill(d, n, digit - 1));
}
