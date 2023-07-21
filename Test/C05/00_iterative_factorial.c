/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:38:27 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/10 10:45:53 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../../C05/ex00/ft_iterative_factorial.c"

int ft_iterative_factorial(int nb);

int	main(int argc, char **argv)
{
	int 	i;

	if (argc < 2)
		return (0);
	i = ft_iterative_factorial(atoi(argv[1]));
	printf("%d\n", i);
}	
