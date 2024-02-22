/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:30:44 by dravaono          #+#    #+#             */
/*   Updated: 2024/02/20 14:51:32 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    **parsarg(char **av)
{
    char *str;
    char **sfinal;
    int i;

    i = 0;
    str = ft_strdup("");
    while(av[++i])
        str = ft_strjoinps(str, av[i]);
    sfinal = ft_split(str, ' ');
    free(str);
    return(sfinal);
}

void     Final(t_pars *parss)
{
    int i;
    int k;

    i = 0;
    while(parss->tab_char[parss->sizetab])
        parss->sizetab++;
    parss->tab_int = (int *)malloc(sizeof(int) * parss->sizetab + 1);
    k = 0;
    while (i != parss->sizetab)
    {
        parss->tab_int[k] = ft_atoips(parss->tab_char[i]);
        i++;
        k++;
    }
    
}

void    firstpars(char *pars)
{
    int i;
    int j;

    i = 0;
    while (pars[i])
    {
        if (!((pars[i] >= '0' && pars[i] <= '9')) && (!(pars[i] == '-')) && (!(pars[i] == ' '))) 
        {
            ft_printf("error");
            exit(1);
        }
        else if (pars[i] == '-')
        {
            j = i - 1;
            if ((pars[j] >= '0' && pars[j] <= '9') || (pars[j] == '-') || pars[j] == '+')
            {
                ft_printf("interdit");
                exit(1);
            }
        }
        i++;
    }
}
void    checkdouble(t_pars *parss)
 {
    int i;
    int j;

    i = 0;
    while (i <= parss->sizetab)
    {
       j = i + 1;
       while (j < parss->sizetab)
       {
            if (parss->tab_int[i] == parss->tab_int[j])
            {
                printf("Double, error.\n");
                exit(1);
            }
            j++;
       }
       i++;
    }
 }

void    cpytab(t_pars *parss)
{
    int i;
    int j;
    int k;
    int index;

    parss->tabcpy = (int *)malloc(sizeof(int) * parss->sizetab + 1);
    i = 0;
    k = 0;
    while (i < parss->sizetab)
    {
        j = 0;
        index = 0;
        while (j < parss->sizetab)
        {
            if (parss->tab_int[i] > parss->tab_int[j])
                index++;
            j++;
        }
        parss->tabcpy[k] = index;
        k++;
        i++;
    }
}