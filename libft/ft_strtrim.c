/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:31:05 by lbarzant          #+#    #+#             */
/*   Updated: 2024/11/25 22:52:04 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	check_trim(char c, char *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (c == set[i])
			return (true);
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		front;
	int		back;

	i = -1;
	front = 0;
	back = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (check_trim(s1[++i], (char *) set))
		front++;
	i = ft_strlen(s1);
	while (check_trim(s1[--i], (char *) set))
		back--;
	if (back == (int) ft_strlen(s1) && front == 0)
		return (ft_strdup((char *) s1));
	return (ft_substr((char *) s1, front, back - front));
}
