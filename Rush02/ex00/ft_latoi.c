/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_latoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:09:01 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/15 21:16:52 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_latoi(char *nbr)
{
	int	i;
	int neg;
	long ret;

	i = 0;
	neg = 1;
	ret = 0;
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == 43 || nbr[i] == 45)
	{
		if (nbr[i] == 45)
			neg *= -1;
		i++;
	}
	while (nbr[i] >= 48 && nbr[i] <= 57)
	{
		ret *= 10;
		ret += (nbr[i] - 48);
		i++;
	}
	ret *= neg;
	return (ret);
}
