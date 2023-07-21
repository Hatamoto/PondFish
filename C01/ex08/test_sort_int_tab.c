/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort_int_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:20:05 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/02 14:05:22 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sort_int_tab.c"

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int size;
	int	myArray[] ={9, 4, 3, 2, 1, 0, 6};

	i = 0;
	size = sizeof(myArray) / sizeof(myArray[0]);
	while(i < size)
	{
		printf("%d", myArray[i]);
		++i;
	}
	printf("|");
	ft_sort_int_tab(myArray, size);
	i = 0;
	while(i < size)
	{
		printf("%d", myArray[i]);
		++i;
	}
}
