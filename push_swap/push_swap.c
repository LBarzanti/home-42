/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:28:24 by lbarzant          #+#    #+#             */
/*   Updated: 2025/01/04 19:20:29 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int count, char **args)
{
	/* t_stack **a;
	t_stack **b; */
	int i;


	if (count == 1)
	{
		write(1, "error\n", 6);
		return (0);
	}
	else if (count == 2)
	{
		write(1, &args[1][0], 1);
	}
	else
	{
		i = 0;
		while (args[++i])
		{
			printf("args[%d] = %s\n", i, args[i]);
			if (args[i][0] >= '0' && args[i][0] <= '9')
			{
				printf("%d\n", ft_atoi(args[i]));
			}
			else if (args[i][0] == '-' && (args[i][1] >= '0' && args[i][1] <= '9'))
			{
				printf("%d\n", ft_atoi(args[i]));
			}
			else
			{
				printf("error\n");
			}
		}
	}
	return (0);
}
