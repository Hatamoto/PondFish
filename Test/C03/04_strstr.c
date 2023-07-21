/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:33:28 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/06 11:34:59 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C03/ex04/ft_strstr.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{
	int		it;
	char	*ndl;

	printf("\ncmdline args count=%d", argc);
	it = 1;
	while (it < argc) 
	{
		printf("\narg%d=%s", it, argv[it]);
		++it;
 	}
	if (argc < 3)
		ndl = "\0";
	else 
		ndl = argv[2];
			
	// Test
	printf("\n");
	printf("%s", strstr(argv[1], ndl));
	printf("\n");
	printf("%s", ft_strstr(argv[1], ndl));
	return (0);
}
