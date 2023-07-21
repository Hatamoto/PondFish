/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rev_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:50:27 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/02 10:48:59 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_rev_int_tab.c"

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int size;
	int	myArray[] ={1, 2, 3, 4, 5};

	i = 0;
	size = sizeof(myArray) / sizeof(myArray[0]);
	while(i < size)
	{
		printf("%d", myArray[i]);
		++i;
	}
	printf("|");
	ft_rev_int_tab(myArray, size);
	i = 0;
	while(i < size)
	{
		printf("%d", myArray[i]);
		++i;
	}
}
