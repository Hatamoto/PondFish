/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:16:08 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/07 08:02:46 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inttohex(char *str, char *hex);

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];

	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			inttohex(str, hex);
			write(1, hex, 3);
		}
		else
			write(1, str, 1);
		++str;
	}
}

void	inttohex(char *str, char *hex)
{
	hex[0] = 92;
	if ((*str / 16) < 10)
		hex[1] = '0' + (*str / 16);
	else
		hex[1] = 97 - 10 + (*str / 16);
	if ((*str % 16) < 10)
		hex[2] = '0' + (*str % 16);
	else
		hex[2] = 97 - 10 + (*str % 16);
}
