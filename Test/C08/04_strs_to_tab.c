/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:02:35 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/18 11:47:45 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "../../C08/ex04/ft_strs_to_tab.c"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stock_str	*ringo;

	ringo = ft_strs_to_tab(argc, argv);
	if (ringo != 0)
		printf("Got array.\n");
	while (ringo->str != 0)
	{
		printf("Size: %d\n", ringo->size);
		printf("Str: %s\n", ringo->str);
		printf("Copy: %s\n", ringo->copy);
	   	ringo++;
	}
	return (0);
}
