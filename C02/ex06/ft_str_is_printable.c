/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:47:40 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/05 13:38:49 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (str == 0)
		return (1);
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		++str;
	}
	return (1);
}
