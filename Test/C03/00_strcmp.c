/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:20:42 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/06 15:07:22 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C03/ex00/ft_strcmp.c"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int 	i;

	i = 1;
	printf("\ncmdline args count=%d", argc);
 	printf("\nexe name=%s", argv[0]);
	while (i < argc) 
	{
		printf("\narg%d=%s", i, argv[i]);
		++i;
 	}	
	printf("\n");
 	
	// Test
	
	printf("%d", ft_strcmp(argv[1], argv[2]));	
	printf("\n");
	printf("%d", strcmp(argv[1], argv[2]));
	return (0);
}
