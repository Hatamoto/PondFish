/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:59:06 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/02 11:38:28 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	pass;
	int	swap;

	index = 0;
	pass = 0;
	while (pass < size)
	{
		while (index < size - pass - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				swap = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = swap;
			}
			++index;
		}
	index = 0;
	++pass;
	}
}
