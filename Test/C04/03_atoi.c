/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:46:14 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/08 15:29:07 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../../C04/ex03/ft_atoi.c"

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	arg;

	arg = 0;
	if (argc < 2)
		return (0);
	//printf("%s \n", argv[1]);
	arg = ft_atoi(argv[1]);
	printf("%d \n", arg);
	return (0);
}
