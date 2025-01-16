/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:05:21 by lbarzant          #+#    #+#             */
/*   Updated: 2024/11/23 00:53:47 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dsize == 0)
		return (src_len);
	i = -1;
	while (src[++i] && i < dsize - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (src_len);
}
