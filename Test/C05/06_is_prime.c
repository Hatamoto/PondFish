/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:50:36 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/11 16:10:17 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C05/ex06/ft_is_prime.c"
#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	//printf("%d\n", atoi(argv[1]));
	printf("%d\n", ft_is_prime(atoi(argv[1])));
}
