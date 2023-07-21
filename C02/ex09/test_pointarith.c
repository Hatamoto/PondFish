/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:17:21 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/04 11:02:18 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	f;

	f = 1;
	while (*str)
	{
		if (f) {
			if (*str > 96 && *str < 123) //capitalize
			{
				*str = *str - 32;
				f = 0;
			}
		}
		else if (*str > 64 && *str < 91) // cap but no flag
			*str = *str + 32;  // lcase it	

		if (*str  == 32 || *str == 45 || *str == 43) //space, dash, plus
			f = 1;
		if (*str > 47 && *str < 58) // num, set to nocap
			f = 0;
	++str;
	}
	return (str);
}

/*
	i = 0;
	while (*str)
	{
		if (*str > 96 && *str < 123) // lower, convert to upper
		{
			if (str == 0 || *(str - 1) == 32 || *(str - 1) == 45 || *(str -1) == 43) //preceded by space, dash
				if ((*(str + 1) > 97 && *(str + 1) < 123) || (*(str + 1) > 64 && *(str + 1) < 91))
					*str = *str - 32;
		}
		else if (*str > 64 && *str < 91) // upper, convert to lower
			*str = *str + 32;
		++str;
	}
	return (str);
}
*/
