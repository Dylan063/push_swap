/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:18:51 by dravaono          #+#    #+#             */
/*   Updated: 2024/02/27 21:14:58 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_stack **stack_a)
{
	t_stack *copy;
	long int	temp;

	copy = (*stack_a);
	temp = 0;
	while (copy)
	{
		if (copy->value < temp)
			return (0);
		temp = copy->value;
		copy = copy->next;
	}
	return (1);
}

void	radix(t_stack **stack_a, t_stack **stack_b, long int size)
{
	long int	i;
	int			shift;

	shift = 0;
	while (!is_sort(stack_a))
	{
		i = 0;
		while (i < size)
		{
			if ((*stack_a)->index >> shift & 1)
				rotate(stack_a, "ra\n");
			else
				push_b(stack_b, stack_a, "pb\n");
			i++;
		}
		while ((*stack_b))
			push_a(stack_b, stack_a, "pa\n");
		shift++;
	}
}

void    full_algo(t_stack **stack_a, t_stack **stack_b, long int size)
{
    if (is_sort(stack_a))
        exit(1);
    else if (size == 3 && !is_sort(stack_a))
        algo3(stack_a);
    else if (size == 5 && !is_sort(stack_a))
        algo5(stack_a, stack_b);
    else
        radix(stack_a, stack_b, size);    
}