/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:53:52 by dravaono          #+#    #+#             */
/*   Updated: 2024/03/09 17:50:36 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	full_algo(t_stack **stack_a, t_stack **stack_b, long int size)
{
	if (is_sort(stack_a))
		exit(1);
	else if (size == 2 && !is_sort(stack_a))
		algo2(stack_a);
	else if (size == 3 && !is_sort(stack_a))
		algo3(stack_a);
	else if (size == 4 && !is_sort(stack_a))
		algo4(stack_a, stack_b);
	else if (size == 5 && !is_sort(stack_a))
		algo5(stack_a, stack_b);
	else
		radix(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_pars	parss;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = 0;
	if (ac > 1)
	{
		while (av[++i])
			firstpars(av[i]);
	}
	parss.tab_char = parsarg(av);
	main2(stack_a, stack_b, parss);
	free_all(&parss, stack_a, stack_b);
	return (0);
}

void	main2(t_stack *stack_a, t_stack *stack_b, t_pars parss)
{
	final(&parss);
	checkdouble(&parss);
	cpytab(&parss);
	stack_a = init_stack(stack_a, parss);
	stack_a = stackindex(stack_a, &parss);
	full_algo(&stack_a, &stack_b, parss.sizetab);
	//print_lst(stack_a);
}
