/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:25:49 by lbarzant          #+#    #+#             */
/*   Updated: 2024/11/28 01:03:54 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	d[10];
	int		i;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	i = 0;
	while (n >= 10)
	{
		d[i++] = (n % 10) + '0';
		n /= 10;
	}
	d[i] = (n % 10) + '0';
	while (i >= 0)
		ft_putchar_fd(d[i--], fd);
}
