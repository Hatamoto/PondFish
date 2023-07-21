/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:29:18 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/06 11:20:58 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (*(str + i) == *(to_find + i) || *(to_find + i) == '\0')
		{
			if (*(to_find + i) == '\0')
				return (str);
			++i;
		}
		++str;
	}
	return (0);
}
