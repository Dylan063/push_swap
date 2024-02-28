/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PS_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:10:17 by dravaono          #+#    #+#             */
/*   Updated: 2024/02/24 19:35:42 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoinps(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*sfinal;

	sfinal = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 2);
	i = 0;
	j = 0;
	if (!sfinal)
		return (0);
	while (s1[i])
	{
		sfinal[i] = s1[i];
        i++;
    }
    sfinal[i] = ' ';
	while (s2[j])
	{
		sfinal[i] = s2[j];
		i++;
		j++;
	}
    sfinal[i] = ' ';
	sfinal[++i] = '\0';
	free(s1);
	return (sfinal);
}

int	ft_atoips(const char *str)
{
	int	i;
	long int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	if (r * s >= 2147483647 || r * s <= -2147483647)
	{
		ft_printf("INT MAX OR MIN");
		exit(1);
	}
	return (r * s);
}

void	free_all(t_pars *parss, t_stack *stack_a, t_stack *stack_b)
{
	t_stack *tmp;
	int	i;
    
	tmp = NULL;
	while(stack_a)
    {
        tmp = stack_a->next;
        free(stack_a);
        stack_a = tmp;
    }
    while (stack_b)
    {
        tmp = stack_b->next;
        free(stack_b);
        stack_b = tmp;
    }
    free(stack_a);
    free(stack_b);
    i = -1;
    while(++i != parss->sizetab)
    {
        free(parss->tab_char[i]);
    }
    free(parss->tab_char);
    free(parss->tab_int);
    free(parss->tabcpy);
}

t_stack	*stackindex(t_stack *stack, t_pars *pars)
{
	t_stack	*tmp;
	int	i;
	
	tmp = stack;
	i = 0;
	while (tmp)
	{
		tmp->index = pars->tabcpy[i];
		tmp = tmp->next;
		i++;
	}
	return (stack);
}