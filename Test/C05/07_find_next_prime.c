/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:33:31 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/11 17:22:51 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C05/ex07/ft_find_next_prime.c"
#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
}
