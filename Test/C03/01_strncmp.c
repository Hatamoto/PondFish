/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:44:02 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/07 21:32:09 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C03/ex01/ft_strncmp.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{

	int i;
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
	
	printf("My : %d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));	
	printf("\n");
	printf("Lib: %d", strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("\n");
	return (0);
}
