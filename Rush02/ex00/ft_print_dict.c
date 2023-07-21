/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:55:33 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/16 20:56:15 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	ft_print_dict(struct s_dict_line **par)
{
	int	i;

	i = 0;
	while ((*par[i]).str != NULL)
	{
		printf("%d : %s", (*par)[i].index, (*par)[i].str);
		ft_putnbr((*par)[i].index);
		write(1, " : ", 1);
		ft_putstr((*par)[i].str);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
