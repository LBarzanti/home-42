/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 17:38:29 by lbarzant          #+#    #+#             */
/*   Updated: 2025/01/04 19:09:48 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct t_stack
{
	struct t_stack	*prev;
	int				value;
	struct t_stack	*next;	
}	t_stack;

void	pb(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rra(t_stack **a);
int		size(t_stack *a);
bool 	sort(t_stack **a, t_stack **b, int low, int high);
int		ft_atoi(char *str);

#endif