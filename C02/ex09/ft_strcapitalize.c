/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:17:21 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/07 07:23:29 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strisalpha(char *str);

char	*ft_strcapitalize(char *str)
{
	int	f;
	int	i;

	f = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (f == 1 && str[i] > 96 && str[i] < 123)
		{
				str[i] = str[i] - 32;
				f = 0;
		}
		else if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		else if (!strisalpha(&str[i]))
			f = 1;
		++i;
	}
	return (str);
}

int	strisalpha(char *str)
{
	if (*str > 90 && *str < 97)
		return (0);
	else if (*str > 64 && *str < 123)
		return (1);
	return (0);
}
