/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:25:16 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/11 16:03:42 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
