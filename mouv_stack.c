/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:06:44 by dravaono          #+#    #+#             */
/*   Updated: 2024/02/21 13:25:24 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *sasb(t_stack *stack, char *mess)
{
    t_stack *tmp1;
    t_stack *tmp2;
    t_stack *tmp3;

    tmp1 = stack;
    tmp2 = stack->next;
    tmp3 = tmp2->next;
    stack = tmp2;
    stack->next = tmp1;
    stack->next->next = tmp3;
    if (mess != NULL)
        ft_printf(mess);
    return(stack);
}

void push_a(t_stack **stack_b, t_stack **stack_a, char *mess)
{
    t_stack *tmp;

    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = *stack_a;
    *stack_a = tmp;
    if (mess != NULL)
        ft_printf(mess);
}
void push_b(t_stack **stack_b, t_stack **stack_a, char *mess)
{
    t_stack *tmp;

    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = *stack_b;
    *stack_b = tmp;
    if (mess != NULL)
        ft_printf(mess);
}

t_stack *remove_front(t_stack *stack)
{
    t_stack *tmp;

    tmp = stack->next;
    free(stack);
    return (tmp);
}

t_stack *rotate(t_stack *stack, char *mess)
{
    t_stack *tmp;
    t_stack *tmp1;

    tmp = stack;
    tmp1 = stack->next;
    while(tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = stack;
    stack = tmp1;
    tmp->next->next = NULL;
    if (mess != NULL)
        ft_printf(mess);
    return(stack);
    
}