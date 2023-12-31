/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:13:11 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/03 17:36:45 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (str == 0)
		return (1);
	while (*str)
	{
		if (!(*str > 64 && *str < 91) && !(*str > 96 && *str < 123))
			return (0);
		++str;
	}
	return (1);
}
