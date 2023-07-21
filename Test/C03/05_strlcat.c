/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:40:46 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/06 17:12:19 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C03/ex05/ft_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(int argc, char **argv)
{
	int 	i;
	int		len;
	char	*dp;
	char 	*dp2;	

	i = 0;
	len = atoi(argv[1]);
	dp = malloc(len);
	dp2 = malloc(len);
	while (i < len - 1)
	{
		dp[i] = '.';
		dp2[i] = '.';
		++i;
	}
	dp[len] = '\0';
	dp2[len] = '\0';
	
	//dp = "................\0";
	//dp2 = "................\0";
	printf("\ncmdline args count=%d", argc);
 	printf("\nexe name=%s", argv[0]);
	i = 1;
	while (i < argc) 
	{
		printf("\narg%d=%s", i, argv[i]);
		++i;
 	}	
	// Test
	printf("\ns1: %s", dp);
	printf("\ns2: %s", dp2);	
	printf("\n");
	printf("Lib result: %li", strlcat(dp2, argv[2], atoi(argv[3])));
	printf("\n");
	printf("My result: %i", ft_strlcat(dp, argv[2], atoi(argv[3])));
	printf("\ns1: %s", dp);
	printf("\ns2: %s", dp2);	
	return (0);
}
