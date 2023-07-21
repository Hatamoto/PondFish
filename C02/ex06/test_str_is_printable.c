/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_is_printable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:49:31 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/05 13:40:42 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_str_is_printable.c"

int	main(void)
{
	char str[] = "kysd bkbdck\ngvkgu36";
	int	a;
	char c;
	
	a = 2;
	a = ft_str_is_printable(str);
	c = '0' + a;
	write(1, &c, 1);
}
