/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:29:07 by lbarzant          #+#    #+#             */
/*   Updated: 2025/01/04 18:41:40 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	median(t_stack *a)
{
	if (!a || !a->next || !a->next->next)
		return (a->value);
	if (a->value > a->next->value)
	{
		if (a->value < a->next->next->value)
			return (a->value);
		else if (a->next->value > a->next->next->value)
			return (a->next->value);
		else
			return (a->next->next->value);
	}
	else
	{
		if (a->value > a->next->next->value)
			return (a->value);
		else if (a->next->value > a->next->next->value)
			return (a->next->value);
		else
			return (a->next->next->value);
	}
}

bool sort(t_stack **a, t_stack **b, int low, int high)
{
	int		pivot;
	t_stack	*temp;

	if (low >= high)
		return (false);
	pivot = median(*a);
	temp = *a;
	while (temp)
	{
		if (temp->value < pivot)
			pb(a, b);
		else
			ra(a);
		temp = temp->next;
	}
	sort(a, b, low, size(*a) - 1);
	sort(b, a, 0, size(*b) - 1);
	while (*b)
		pa(a, b);
	return (true);
}
