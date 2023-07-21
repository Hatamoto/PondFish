/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:22:22 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/10 15:24:42 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../../C05/ex03/ft_recursive_power.c"

int ft_recursive_power(int nb, int power);

int main(int argc, char **argv)
{
    int     i;  

    if (argc < 3)
        return (0);
    i = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
    printf("%d\n", i); 
}
