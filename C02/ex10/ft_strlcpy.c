/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:25:59 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/07 07:34:15 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;

	i = 0;
	srcsize = 0;
	if (size != 0)
	{
		while (*src)
		{
			while (i < size - 1)
			{
				dest[i] = src[i];
				++i;
			}
			++srcsize;
			++src;
		}
		dest[i] = '\0';
	}
	return (srcsize);
}
