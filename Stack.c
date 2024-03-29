/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:06:41 by dravaono          #+#    #+#             */
/*   Updated: 2024/03/08 16:57:17 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lstadd_back(t_stack *lst, int content)
{
	t_stack	*new_node;
	t_stack	*temp;

	temp = lst;
	new_node = malloc(sizeof(t_stack));
	new_node->value = content;
	new_node->index = 0;
	new_node->next = NULL;
	if (!lst)
		return (new_node);
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
		return (lst);
	}
}

t_stack	*init_stack(t_stack *stack, t_pars pars)
{
	int	i;

	i = -1;
	while (++i < pars.sizetab)
		stack = lstadd_back(stack, pars.tab_int[i]);
	return (stack);
}

void	print_lst(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%d\n", stack->value);
		stack = stack->next;
	}
}
