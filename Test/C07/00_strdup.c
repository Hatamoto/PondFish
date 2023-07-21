/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:53:29 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/12 19:07:28 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../C07/ex00/ft_strdup.c"

int	main(int argc, char *argv[])
{
	char *orig;
	char *copy;
	
	if (argc < 2)
		return (0);
	orig = argv[1];
	printf(" $%s$ | %p\n", orig, orig);
	copy = strdup(orig);
	printf(" $%s$ | %p\n", copy, copy);
	copy = ft_strdup(orig);
	printf(" $%s$ | %p\n", copy, copy);
	free(copy);
}
