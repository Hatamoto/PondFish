/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:57:01 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/09 19:29:49 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		do_math(unsigned int nc, char *value, int pos);
int		ins_digit(char *value, char d, int pos);
void	prt_value(char *value, int pos);

void	ft_putnbr(int nb)
{
	unsigned int	nc;
	int				isneg;
	char			value[21];
	int				pos;

	pos = 20;
	isneg = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}	
		else
		{
			nb = nb * -1;
			isneg = 1;
		}
	}
	nc = nb;
	pos = do_math(nc, value, pos);
	if (isneg == 1)
		pos = ins_digit(value, ('-'), pos);
	prt_value(value, pos);
}

int	ins_digit(char *value, char d, int pos)
{
	value[pos] = d;
	pos--;
	return (pos);
}

int	do_math(unsigned int nc, char *value, int pos)
{
	int	di;

	di = 0;
	while (nc >= 10)
	{
		di = nc % 10;
		nc = nc / 10;
		pos = ins_digit(value, ('0' + di), pos);
	}
	if (nc < 10)
		pos = ins_digit(value, ('0' + nc), pos);
	return (pos);
}

void	prt_value(char *value, int pos)
{
	pos++;
	while (pos <= 20)
	{
		write(1, &value[pos], 1);
		pos++;
	}
}
