/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:45:42 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/14 11:55:04 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C08/ex03/ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point point;
	set_point(&point);
	printf("x:%d\n", point.x);
	printf("y:%d\n", point.y);
	return (0);
}
