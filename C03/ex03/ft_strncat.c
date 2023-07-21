/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:47:42 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/06 10:25:51 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
