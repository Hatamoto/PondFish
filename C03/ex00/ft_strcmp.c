/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:58:09 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/05 15:46:18 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	ret;

	while (*s1 && *s2 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	ret = *s1 - *s2;
	return (ret);
}
