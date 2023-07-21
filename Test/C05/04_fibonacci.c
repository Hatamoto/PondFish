/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:41:17 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/10 20:52:05 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../../C05/ex04/ft_fibonacci.c"

int ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	int	fib;
	fib = ft_fibonacci(atoi(argv[1]));
	printf("%d\n", fib);
}
