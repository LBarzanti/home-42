/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:54:29 by lbarzant          #+#    #+#             */
/*   Updated: 2025/02/09 19:31:22 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv)
{
	if (argc < 5)
	{
		ft_printf("%s\n", "error, too few parameters");
		return (0);
	}
	else if (argc > 5)
	{
		ft_printf("%s\n", "error, too many parameters");
		return (0);
	}
	else
	{
		ft_printf("%s\n", "ok");
		return (0);
	}
	return (argv[0][0]);
}