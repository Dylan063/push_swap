/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:05:37 by dravaono          #+#    #+#             */
/*   Updated: 2024/03/08 17:11:57 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	placementalgo4(t_stack **stack_a)
{
	if ((*stack_a)->next->index == 0)
		sasb(stack_a, "sa\n");
	else if ((*stack_a)->next->next->index == 0)
	{
		rotate(stack_a, "ra\n");
		rotate(stack_a, "ra\n");
	}
	else if ((*stack_a)->next->next->next->index == 0)
		*stack_a = rrotate(stack_a, "rra\n");
}

void	placementalgo5(t_stack **stack_a)
{
	if ((*stack_a)->next->index == 0)
		sasb(stack_a, "sa\n");
	else if ((*stack_a)->next->next->index == 0)
	{
		rotate(stack_a, "ra\n");
		rotate(stack_a, "ra\n");
	}
	else if ((*stack_a)->next->next->next->index == 0)
	{
		*stack_a = rrotate(stack_a, "rra\n");
		*stack_a = rrotate(stack_a, "rra\n");
	}
	else if ((*stack_a)->next->next->next->next->index == 0)
		*stack_a = rrotate(stack_a, "rra\n");
}

void	placementalgo_5(t_stack **stack_a)
{
	if ((*stack_a)->next->index == 1)
		sasb(stack_a, "sa\n");
	else if ((*stack_a)->next->next->index == 1)
	{
		rotate(stack_a, "ra\n");
		rotate(stack_a, "ra\n");
	}
	else if ((*stack_a)->next->next->next->index == 1)
		*stack_a = rrotate(stack_a, "ra\n");
}
