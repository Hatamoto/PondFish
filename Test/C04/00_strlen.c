/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:33:28 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/08 19:07:40 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C04/ex00/ft_strlen.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strstr(char *str);

int	main(int argc, char **argv)
{
	int		it;

	printf("\ncmdline args count=%d", argc);
	it = 1;
	while (it < argc) 
	{
		printf("\narg%d=%s", it, argv[it]);
		++it;
 	}
	// Test
	printf("\n");
	printf("%li", strlen(argv[1]));
	printf("\n");
	printf("%i", ft_strlen(argv[1]));
	return (0);
}
