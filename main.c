/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:53:52 by dravaono          #+#    #+#             */
/*   Updated: 2024/02/27 21:12:33 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int ac, char **av)
{
	t_pars parss;
	t_stack *stack_a;
	t_stack *stack_b;
	int i;

	stack_a = NULL;
	stack_b = NULL;
	i = 0;
	if (ac < 3)
	{
		ft_printf("manque nombre");
		exit(1);
	}
	if(ac > 1)
	{
		while(av[++i])
			firstpars(av[i]);
	}
	parss.tab_char = parsarg(av);
	Final(&parss);
	checkdouble(&parss);
	cpytab(&parss);
	stack_a = init_stack(stack_a, parss);
	stack_a = stackindex(stack_a, &parss);
	full_algo(&stack_a, &stack_b, parss.sizetab);
	ft_printf("-------------------\n");
	//free_all(&parss, &stack_a, &stack_b);
	//system("leaks push_swap");
	return(0);
}
