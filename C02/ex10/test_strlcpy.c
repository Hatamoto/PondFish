/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:16:46 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/07 07:36:54 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcpy.c"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			srcstr[] = "No moi miten menee?";
	//char			desstr[] = "Hyvin kiitos.";
	char            desstr2[] = "Hyvin kiitos.";
	unsigned int	size;
	unsigned int 	ssize;

	ssize = sizeof(srcstr) / sizeof(srcstr[0]);
	size = sizeof(desstr2) / sizeof(desstr2[0]);
	printf("ssize: %d \n", ssize);
	//printf("returned: %d \n", ft_strlcpy(desstr, srcstr, size));
	printf("returned: %li \n", strlcpy(desstr2, srcstr, size));
	//write(1, desstr, size);
	//printf("\n");
	write(1, desstr2, size);
}
