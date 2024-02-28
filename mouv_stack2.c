/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv_stack2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:05:15 by dravaono          #+#    #+#             */
/*   Updated: 2024/02/25 16:28:58 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack    *ss(t_stack *stack_a, t_stack **stack_b)
{
    sasb(&stack_a, NULL);
    sasb(stack_b, NULL);
    ft_printf("ss\n");
    return(stack_a);
}

t_stack    *rr(t_stack *stack_a, t_stack **stack_b)
{
    rotate(&stack_a, NULL);
    rotate(stack_b, NULL);
    ft_printf("rr\n");
    return(stack_a);
}

t_stack *rrotate(t_stack **stack, char *mess)
{
    t_stack *tmp;
    t_stack *tmp1;

    tmp = *stack;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp1 = *stack;
    while (tmp1->next->next != NULL)
       tmp1 = tmp1->next;
    tmp->next = *stack;
    tmp1->next = NULL;    
    if (mess != NULL)
        ft_printf(mess);
    return(tmp);
}

t_stack    *rrr(t_stack *stack_a, t_stack **stack_b)
{
    stack_a = rrotate(&stack_a, NULL);
    *stack_b = rrotate(stack_b, NULL);
    ft_printf("rrr\n");
    return(stack_a);
}