/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:22:36 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/06 09:33:04 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C03/ex02/ft_strcat.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char **argv)
{
	int 	i;
	int		it;
	int		len;
	int		dlen;
	char	*dp;
	char 	*dp2;	

	i = 1;
	it = 0;
	len = atoi(argv[1]);
	dlen = 0;
	dp = malloc(len);
	dp2 = malloc(len);
	while (it < len - 1)
	{
		dp[it] = '.';
		++it;
		++dlen;
	}
	it = 0;
	dp[len] = '\0';
	++dlen;
	while (it < len - 1)
	{
		dp2[it] = '.';
		++it;
	}
	printf("\ncmdline args count=%d", argc);
 	printf("\nexe name=%s", argv[0]);
	while (i < argc) 
	{
		printf("\narg%d=%s", i, argv[i]);
		++i;
 	}	
	printf("\n");
 	printf("dest len: %d \n", dlen);
	// Test
	printf("%s", dp);	
	printf("\n");
	printf("%s", strcat(dp2, argv[2]));
	printf("\n");
	printf("%s", ft_strcat(dp, argv[2]));
	return (0);
}
