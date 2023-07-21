/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strst_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:01:50 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/18 12:49:13 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char				*ft_strdup(char *src);
int					ft_strlen(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*starr;
	int			i;

	starr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!(starr))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		starr[i].size = ft_strlen(av[i]);
		starr[i].str = av[i];
		starr[i].copy = ft_strdup(av[i]);
		i++;
	}
	starr[i].str = 0;
	starr[i].copy = 0;
	return (starr);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	dst = (char *)malloc(((ft_strlen(src)) * sizeof(char) + 1));
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}
