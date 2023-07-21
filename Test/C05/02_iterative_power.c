/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:31:16 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/10 12:47:47 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../../C05/ex02/ft_iterative_power.c"

int ft_iterative_power(int nb, int power);

int main(int argc, char **argv)
{
    int     i;  

    if (argc < 3)
        return (0);
    i = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
    printf("%d\n", i); 
}
