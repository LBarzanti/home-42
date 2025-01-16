/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:58:42 by lbarzant          #+#    #+#             */
/*   Updated: 2024/11/25 22:50:01 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "stdlib.h"

static bool	is_space(char c)
{
	if (c == ' ' || c == '\t'
		|| c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (true);
	return (false);
}

static bool	is_symbol(char c)
{
	if (c == '-' || c == '+')
		return (true);
	return (false);
}

static bool	is_valid(char c)
{
	if ((c >= '0' && c <= '9') || is_symbol(c) || is_space(c))
		return (true);
	return (false);
}

int	ft_atoi(char *str)
{
	int		i;
	bool	is_negative;
	int		result;

	result = 0;
	i = 0;
	is_negative = false;
	while (str[i] && is_space(str[i]) && is_valid(str[i]))
		i++;
	if (is_symbol(str[i]))
	{
		if (str[i] == '-')
			is_negative = true;
		i++;
	}
	if (is_symbol(str[i]))
		return (0);
	while (str[i] && (str[i] >= '0' && str[i] <= '9') && is_valid(str[i]))
		result = result * 10 + (str[i++] - '0');
	if (is_negative)
		return (-result);
	else
		return (result);
}
