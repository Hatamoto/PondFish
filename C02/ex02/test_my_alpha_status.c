/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:36:08 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/03 15:33:52 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	cmp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int		i1;
	int		i2;
	int		found;

	i1 = 0;
	i2 = 0;
	found = 0;
	while (str[i1])
	{
		while (cmp[i2])
		{
			if (str[i1] == cmp[i2])
			{
				found = 1;
				break ;
			}
		++i2;
		}
		if (found == 0)
			return (0);
		found = 0;
		++i1;
	}
	return (1);
}
