/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:19:05 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/12 19:12:41 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../C07/ex01/ft_range.c"

int	main(int argc, char **argv)
{
	int	*irange;
	int	min;
	int	max;
	int	i;
	
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	if (argc < 3)
		return (0);
	irange = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", irange[i]);
		i++;
	}
	free(irange);
	return (0);
}
