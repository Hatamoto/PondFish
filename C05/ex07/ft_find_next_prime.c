/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:19:53 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/11 17:07:59 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	unsigned int	nc;

	if (nb <= 2)
		return (2);
	if (nb == 3)
		return (3);
	nc = (unsigned int)nb;
	if (nc % 2 == 0)
		nc++;
	while (nc < (nc * 2))
	{
		if (ft_is_prime(nc))
			return ((int)nc);
		nc = nc + 2;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
