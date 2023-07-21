/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:57:08 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/01 19:17:12 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.c"

void	ft_putstr(char *str);

int	main(void)
{
	char str[]  = "Hello swimmers!";
	char *strp;
	
	strp = str;
	ft_putstr(strp);
}
