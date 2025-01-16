/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 17:45:24 by lbarzant          #+#    #+#             */
/*   Updated: 2025/01/04 17:58:55 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (*a)
	{
		temp = *a;
		*a = (*a)->next;
		if (*a)
			(*a)->prev = NULL;
		temp->next = *b;
		if (*b)
			(*b)->prev = temp;
		*b = temp;
	}
	write(1, "pb\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	
	if (*b)
	{
		temp = *b;
		*b = (*b)->next;
		if (*b)
			(*b)->prev = NULL;
		temp->next = *a;
		if (*a)
			(*a)->prev = temp;
		*a = temp;
	}
}

void	ra(t_stack **a)
{
	t_stack	*temp;
	t_stack	*last;

	if (*a && (*a)->next)
	{
		temp = *a;
		*a = (*a)->next;
		(*a)->prev = NULL;
		temp->next = NULL;
		last = *a;
		while (last->next)
			last = last->next;
		last->next = temp;
		temp->prev = last;
	}
	write(1, "ra\n", 3);
}

void	rra(t_stack **a)
{
	t_stack	*last;

	if (*a && (*a)->next)
	{
		last = *a;
		while (last->next)
			last = last->next;
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = *a;
		(*a)->prev = last;
		*a = last;
	}
	write(1, "rra\n", 4);
}

int	size(t_stack *a)
{
	int	len;

	len = 0;
	while (a)
	{
		a = a->next;
		len++;
	}
	return (len);
}
