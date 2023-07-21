/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:38:59 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/06 10:21:20 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C03/ex03/ft_strncat.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(int argc, char **argv)
{
	int		it;
	int		len;
	int		dlen;
	char	*dp;
	char 	*dp2;	

	len = atoi(argv[1]);
	dlen = 0;
	dp = malloc(len);
	dp2 = malloc(len);
	// init teststr 1 and dlen
	it = 0;
	while (it < len - 1)
	{
		dp[it] = '.';
		++it;
		++dlen;
	}
	dp[len] = '\0';
	++dlen;
	// init teststr 2
	it = 0;
	while (it < len - 1)
	{
		dp2[it] = '.';
		++it;
	}
	dp2[len] = '\0';
	printf("\ncmdline args count=%d", argc);
	it = 1;
 	printf("\nexe name=%s", argv[0]);
	while (it < argc) 
	{
		printf("\narg%d=%s", it, argv[it]);
		++it;
 	}	
	printf("\n");
 	printf("dest len: %d \n", dlen);
	// Test
	printf("%s", dp);	
	printf("\n");
	printf("%s", strncat(dp2, argv[2], atoi(argv[3])));
	printf("\n");
	printf("%s", ft_strncat(dp, argv[2], atoi(argv[3])));
	return (0);
}
