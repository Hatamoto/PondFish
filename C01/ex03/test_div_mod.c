/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_div_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:30:08 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/01 17:38:01 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_div_mod.c"

void	ft_div_mod(int a, int b, int *div, int*mod);

int	main(void)
{
	int	div;
	int mod;

	ft_div_mod(5, 3, &div, &mod);

	printf("div: %d", div);
	printf("mod: %d", mod);
}
