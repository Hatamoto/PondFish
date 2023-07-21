/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:59:12 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/08 16:34:00 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_radix(char *bs);

void	ft_putnbr_base(int nbr, char *base)
{
	bc = count_radix(base);
	write(1, 'C U L8R!', 8);
}

int	count_radix(char *bs)
{
	int	count;

	count = 0;
	while (*bs)
	{
		count++;
		bs++;
	}
	return (count);
}
