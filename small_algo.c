/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:46:58 by dravaono          #+#    #+#             */
/*   Updated: 2024/03/08 16:24:29 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo2(t_stack **stack)
{
	if ((*stack)->index > (*stack)->next->index)
		sasb(stack, "sa\n");
}

void	algo3(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = *stack;
	tmp1 = tmp->next;
	if ((tmp->index > tmp1->index) && \
	(tmp1->index < tmp1->next->index) && (tmp->index < tmp1->next->index))
		sasb(stack, "sa\n");
	else if ((tmp->index > tmp1->index) && (tmp1->index > tmp1->next->index))
	{
		sasb(stack, "sa\n");
		*stack = rrotate(stack, "rra\n");
	}
	else if ((tmp->index > tmp1->index) && (tmp1->index < tmp1->next->index))
		rotate(stack, "ra\n");
	else if ((tmp->index < tmp1->index) && \
		(tmp1->index > tmp1->next->index) && (tmp1->next->index > tmp->index))
	{
		sasb(stack, "sa\n");
		rotate(stack, "ra\n");
	}
	else if ((tmp->index < tmp1->index) && (tmp1->index > tmp1->next->index))
		*stack = rrotate(stack, "rra\n");
}

void	algo4(t_stack **stacka, t_stack **stackb)
{
	placementalgo4(stacka);
	push_b(stackb, stacka, "pb\n");
	algo3(stacka);
	push_a(stackb, stacka, "pa\n");
}

void	algo5(t_stack **stacka, t_stack **stackb)
{
	placementalgo5(stacka);
	push_b(stackb, stacka, "pb\n");
	placementalgo_5(stacka);
	push_b(stackb, stacka, "pb\n");
	algo3(stacka);
	push_a(stackb, stacka, "pa\n");
	push_a(stackb, stacka, "pa\n");
}
