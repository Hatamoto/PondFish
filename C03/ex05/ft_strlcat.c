/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:40:17 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/07 09:17:02 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strl(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	dlen;

	i = 0;
	j = 0;
	len = size - strl(dest) - 1;
	dlen = strl(dest);
	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0' && j < len)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	if (i < size)
		dest[i] = '\0';
	return (dlen + strl(src));
}

unsigned int	strl(char *str)
{
	unsigned int	l;

	l = 0;
	while (*str)
	{
		++l;
		++str;
	}
	return (l);
}
