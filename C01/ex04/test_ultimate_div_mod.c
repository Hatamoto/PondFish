/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ultimate_div_mod.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:28:26 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/01 20:11:41 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_div_mod.c"

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int b;

	//int *ap = &a;
	//int *bp = &b;

	a = 10;
	b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("div: %d", a);
	printf("mod, %d", b);
}
