/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_setup2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:25:48 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/19 16:00:57 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "info.h"
#include "ft.h"

char	*get_num_move(char *str, t_info *infoptr)
{
	int		i;
	int		j;
	char	nstr[12];

	j = 0;
	while (str[j] != '\n')
		j++;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9' && i < (j - 3))
	{
		nstr[i] = str[i];
		i++;
	}
	if (i == 0)
		return (0);
	nstr[i] = 0;
	infoptr->y = ft_atoi(nstr);
	return (str);
}

t_info	set_info(char	*map)
{
	t_info		info;
	int			i;
	t_gridpos	*obstacles_found;

	obstacles_found = malloc(sizeof(t_gridpos) * 10001);
	obstacles_found[10001].y = -3;
	obstacles_found[10001].x = -3;
	i = 0;
	while (obstacles_found[i].y != -3)
	{
		obstacles_found[i].x = -2;
		obstacles_found[i].y = -2;
	 	i++;
	}
	info.ob_found = obstacles_found;
	i = 0;
	while (map[i] != '\0' && map[i] != '\n')
		i++;
	i--;
	info.e = map[i - 2];
	info.o = map[i - 1];
	info.f = map[i];
	map = get_num_move(map, &info);
	map = ft_nextline(map);
	info.x = ft_strlen(map, '\n');
	return (info);
}
