/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_2_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:08:22 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/13 12:36:58 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../C07/ex03/ft_strjoin.c"

char	*ft_strcpy(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*s[4];
	char	*res;
	char  *sep;
	
	s[0] = "Let's";
	s[1] = "Go";
	s[2] = "Surfin'";
	s[3] = "Now";
	sep = "<->";
	res = ft_strjoin(4, s, sep);
	printf("%s\n", res);
	free(res);
	return 0;
}
/*
    // Pointer to an integer
    int *p;

    // Pointer to an array of 5 integers
    int (*ptr)[5];
    int arr[5];

    // Points to 0th element of the arr.
    p = arr;

    // Points to the whole array arr.
    ptr = &arr;
*/
