/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_squares.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:44:31 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 15:34:03 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAKE_SQUARES_H
# define MAKE_SQUARES_H

# include "info.h"

int		make_squares(t_info info, char **grid, t_gridpos gridpos, int size);
void	add_obstacle_to_array(int y, int x, t_info info);
void    null_passed_obstacles(t_info info, t_gridpos gridpos);

#endif
