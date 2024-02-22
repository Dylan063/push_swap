/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:54:53 by dravaono          #+#    #+#             */
/*   Updated: 2024/02/22 14:50:14 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include "./libft/inc/libft.h"
# include "./libft/inc/get_next_line_bonus.h"
# include "./libft/inc/ft_printf.h"

typedef struct s_pars
{
	char			**tab_char;
    char            *str;
    int             *tab_int;
    int             sizetab;
    int             *tabcpy;
}			t_pars;

typedef struct s_stack
{
    int             value;
    int             index;
    struct s_stack  *next;
}              t_stack;


int         main (int ac, char **av);
void        firstpars(char *pars);
void        negativ(char *pars, int j);
char	    *ft_strjoinps(char *s1, char *s2);
char        **parsarg(char **av);
int	        ft_atoips(const char *str);
void	    tabcroiss(int *tab, int size);
void        Final(t_pars *parss);
void        checkdouble(t_pars *parss);
void        cpytab(t_pars *parss);
t_stack     *init_stack(t_stack *stack, t_pars pars);
t_stack     *clear_stack(t_stack *stack);
int         is_stack(t_stack *stack);
t_stack     *clean_stack(t_stack *stack);
void        lstremove_last(t_stack *lst);
int	        lstsize(t_stack *lst);
void        push_a(t_stack **stack_b, t_stack **stack_a, char *mess);
void        push_b(t_stack **stack_b, t_stack **stack_a, char *mess);
t_stack     *sasb(t_stack *stack, char *mess);
void        print_lst(t_stack *stack);
t_stack     *remove_front(t_stack *stack);
void	    free_all(t_pars *parss, t_stack **stack_a, t_stack **stack_b);
t_stack     *rotate(t_stack *stack, char *mess);
void        ss(t_stack *stack_a, t_stack *stack_b);
void        rr(t_stack *stack_a, t_stack *stack_b);
t_stack     *rrotate(t_stack *stack, char *mess);
void        rrr(t_stack *stack_a, t_stack *stack_b);


#endif