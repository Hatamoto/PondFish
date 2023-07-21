/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:09:35 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/12 19:15:43 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../C07/ex02/ft_ultimate_range.c"

int	main(int argc, char **argv)
{
	int	*irange;
	int ret;
	int	min;
	int	max;
	int	i;
	
	irange = 0;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	if (argc < 3)
		return (0);
	ret = ft_ultimate_range(&irange, min, max);
	printf("Returned: %d\n", ret); 
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", irange[i]);
		i++;
	}
	free(irange);
	return (0);
}
