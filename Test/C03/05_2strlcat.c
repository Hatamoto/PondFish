/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:40:46 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/07 21:55:51 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C03/ex05/ft_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{	
	char	dp[26] = "..............";
	char 	dp1[26] = "..............";
	char    dp2[26] = "..............";
	// Test
	printf("\ns0: %s", dp);
	printf("\ns1: %s", dp1);
	printf("\ns2: %s", dp2);	
	printf("\n");
	printf("Lib result: %li", strlcat(dp, "Hello World!", 20));
	printf("\n");
	printf("My result: %i", ft_strlcat(dp2, "Hello World!", 20));
	printf("\ns0: %s", dp);
	printf("\ns1: %s", dp1);
	printf("\ns2: %s", dp2);
	printf("\n");	
	return (0);
}
