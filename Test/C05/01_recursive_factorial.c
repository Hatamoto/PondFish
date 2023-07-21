/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:17:22 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/10 11:48:26 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../../C05/ex01/ft_recursive_factorial.c"

int ft_recursive_factorial(int nb);

int main(int argc, char **argv)
{
    int     i;  

    if (argc < 2)
        return (0);
    i = ft_recursive_factorial(atoi(argv[1]));
    printf("%d\n", i); 
}
