/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 23:24:14 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/09 18:17:40 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../../C04/ex02/ft_putnbr.c"

int	main(int argc, char **argv)
{
	int	num;
	num = atoi(argv[1]);
	if (argc > 2 || argc == 0)
		return(0);
	printf("%d \n", num);
	ft_putnbr(num);
}	
