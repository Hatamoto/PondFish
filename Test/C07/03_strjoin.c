/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:53:53 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/13 12:05:44 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../C07/ex03/ft_strjoin.c"

char	*ft_strcpy(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char 	*result;
	char	*strs[argc];
	char	*sep;
	int		size;
	int		i;
	
	if (argc < 2)
		return (0);
	size = 0;
	i = 0;
	while (i < argc + 1)
	{
		strs[i] = ft_strcpy(strs[i], argv[i + 1]);
		i++;
		size++;
	}
	sep = "<->";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
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
