/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:56:42 by lbarzant          #+#    #+#             */
/*   Updated: 2024/11/24 18:04:15 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*d;

	d = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!d)
		return (NULL);
	i = -1;
	while (s[++i])
		d[i] = (*f)(i, s[i]);
	return (d);
}
