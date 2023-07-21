/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttero <ttero@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:20:30 by ixu               #+#    #+#             */
/*   Updated: 2023/07/02 16:54:25 by ttero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_line(int x, int x0, int y, int y0)

{
	if (x0 == x && x > 1 && (y0 == 1 || y0 == y))
		ft_putchar('C');
	else if (x0 == 1 && (y0 == 1 || y0 == y))
		ft_putchar('A');
	else if (x0 < x && x0 > 1 && y0 < y && y0 > 1)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	x0;
	int	y0;

	x0 = 1;
	y0 = 1;
	while (y0 <= y && y > 0 && x > 0)
	{
		while (x0 <= x)
		{
			write_line(x, x0, y, y0);
			x0++;
		}
		ft_putchar('\n');
		x0 = 1;
		y0++;
	}
}
