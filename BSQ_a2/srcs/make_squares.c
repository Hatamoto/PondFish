/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_squares.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:23:05 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 17:06:54 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "info.h"

void add_obstacle_to_array(int y, int x, t_info info)
{
    int i;

    i = 0;
    while (info.ob_found[i].y != -3)
    {   
        if (info.ob_found[i].y == -1 && info.ob_found[i].x == -1) 
        {   
            info.ob_found[i].y = y;
            info.ob_found[i].x = x;
            printf("Ob found : %d, %d\n", info.ob_found[i].y, info.ob_found[i].x);
            break;
        }   
        if (info.ob_found[i].y == -2 && info.ob_found[i].x == -2) 
        {   
            info.ob_found[i].y = y;
            info.ob_found[i].x = x;
            printf("Ob found : %d, %d\n", info.ob_found[i].y, info.ob_found[i].x);
        	break;
		}
		i++;
    }  
}

int	test_square(t_info info, char **grid, t_gridpos gridpos, int size)
{
	int	y;
	int	x;

	y = gridpos.y;
	x = gridpos.x + size - 1;
	while (y - gridpos.y < size)
	{
		if (grid[y][x] != info.e)
		{
			add_obstacle_to_array(y, x, info);
			return (0);
		}
		y++;
	}
	y = gridpos.y + size - 1;
	x = gridpos.x;
	while (x - gridpos.x < size)
	{
		if (grid[y][x] != info.e)
		{
			add_obstacle_to_array(y, x, info);
			return (0);
		}
		x++;
	}
	return (1);
}

int test_obstacles_in_size(t_info info, t_gridpos gridpos, int size)
{
    int i;

    i = 0;
    while (info.ob_found[i].y != -2)
    {
        if (info.ob_found[i].y >= gridpos.y && info.ob_found[i].y <= (gridpos.y + size))
            if (info.ob_found[i].x >= gridpos.x && info.ob_found[i].x <= (gridpos.x + size))
                return (1);
    i++;
	}
    return (0);
}

int	make_squares(t_info info, char **grid, t_gridpos gridpos, int size)
{
	int	max;

	if (gridpos.y + size > info.y || gridpos.x + size > info.x)
		max = size - 1;
	else if (test_obstacles_in_size(info, gridpos, size))
		max = size - 1;
	else if (test_square(info, grid, gridpos, size) == 0)
		max = size - 1;
	else
		max = make_squares(info, grid, gridpos, size + 1);
	return (max);
}

void	null_passed_obstacles(t_info info, t_gridpos gridpos)
{
	int i;

	i = 0;
	while (info.ob_found[i].y != -2 || info.ob_found[i].y != -3)
	{
		if (info.ob_found[i].y < gridpos.y)
		{
			info.ob_found[i].y = -1;
			info.ob_found[i].x = -1;
		}
		i++;
	}
}

