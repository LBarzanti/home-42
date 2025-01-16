/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:43:54 by lbarzant          #+#    #+#             */
/*   Updated: 2024/11/23 00:53:40 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	final_size;
	size_t	src_size;
	size_t	dst_size;
	size_t	i;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dsize < dst_size)
		final_size = src_size + dsize;
	else
		final_size = src_size + dst_size;
	if (dsize == 0)
		return (final_size);
	i = -1;
	while (src[++i] && dst_size + i < dsize - 1)
		dst[dst_size + i] = src[i];
	dst[dst_size + i] = '\0';
	return (final_size);
}
