/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:03:36 by fde-sant          #+#    #+#             */
/*   Updated: 2024/11/28 00:39:46 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words(char const *s, char c)
{
	int		i;
	int		j;
	bool	check;

	i = 0;
	j = 0;
	check = false;
	while (s[i])
	{
		if (s[i] != c && !check)
		{
			check = true;
			j++;
		}
		else if (s[i] == c)
			check = !check;
		i++;
	}
	return (j);
}

static int	clean(char **d, int j)
{
	while (j--)
		free(d[j]);
	return (0);
}

static char	*fill(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = ft_calloc(end - start + 1, sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	return (word);
}

static int	make_split(char **d, const char *s, char c)
{
	size_t	i;
	int		j;
	int		check;

	i = 0;
	j = 0;
	check = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && check < 0)
			check = i;
		else if ((s[i] == c || i == ft_strlen(s)) && check >= 0)
		{
			d[j++] = fill(s, check, i);
			if (d[j - 1] == NULL)
				return (clean(d, j -1));
			check = -1;
		}
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**d;

	if (!s)
		return (NULL);
	d = ft_calloc(words(s, c) + 1, sizeof(char *));
	if (!d)
		return (NULL);
	if (make_split(d, s, c) == 0)
		return (NULL);
	return (d);
}
