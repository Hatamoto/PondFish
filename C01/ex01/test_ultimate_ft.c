/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ultimate_ft.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:31:26 by mburakow          #+#    #+#             */
/*   Updated: 2023/06/30 20:54:07 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_ft.c"

void	ft_utimate_ft(int *********nbr);

int	main(void)
{
	int	i;
	int	*ip1;
	int **ip2;
	int ***ip3;
	int ****ip4;
	int *****ip5;
	int ******ip6;
	int *******ip7;
	int ********ip8;
	int *********ip9;

	i = 6;
	ip1 = &i;
	ip2 = &ip1;
	ip3 = &ip2;
	ip4 = &ip3;
	ip5 = &ip4;
	ip6 = &ip5;
	ip7 = &ip6;
	ip8 = &ip7;
	ip9 = &ip8;
	ft_ultimate_ft(ip9);
	printf("It's %d", i);
}
