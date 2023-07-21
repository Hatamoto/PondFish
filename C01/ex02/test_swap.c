/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 21:14:48 by mburakow          #+#    #+#             */
/*   Updated: 2023/06/30 22:38:21 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_swap.c"

void	ft_swap(int *a, int *b);

int	main(void)
{
	//int a = 5; 	an integer, contains value
	//int *p;  		an integer pointer, contains address
	//p = &a;  		&a means address of a
	//a = *p;  		*p means value stored in that address, here 5

	int	a1;
	int b1;
	int *a;
	int *b;

	a = &a1;
	b = &b1;
	b1 = 5;
	a1 = 3;
	printf("%d %d | ", a1, b1);
	ft_swap(a, b);
	printf("%d %d ", a1, b1);
}
