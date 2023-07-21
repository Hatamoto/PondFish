/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:08:16 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/19 15:01:18 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_H
# define INFO_H


typedef struct s_gridpos
{
	int	y;
	int	x;
}	t_gridpos;

typedef struct s_info
{
	int					y;
	int					x;
	char				e;
	char				o;
	char				f;
	t_gridpos 			*ob_found;
}	t_info;

#endif
