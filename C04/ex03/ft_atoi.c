/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:45:48 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/09 14:40:50 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_isspace(char *str);
int		ft_getval(char *str, int ngt);

int	ft_atoi(char *str)
{
	int	ngt;
	int	arg;

	ngt = 1;
	arg = 0;
	str = ft_isspace(str);
	while (*str)
	{
		if (*str == 45)
			ngt *= -1;
		else if (*str == 43)
			;
		else if (*str >= 48 && *str <= 57)
		{
			arg = ft_getval(str, ngt);
			return (arg);
		}
		else
			return (0);
		str++;
	}
	return (0);
}

char	*ft_isspace(char *str)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (*str == 32 || (*str >= 9 && *str <= 13))
		{
			str++;
			str = ft_isspace(str);
		}
		i++;
	}
	return (str);
}

int	ft_getval(char *str, int ngt)
{
	int	arg;

	arg = 0;
	while (*str >= 48 && *str <= 57)
	{
		if (arg != 0)
			arg *= 10;
		arg += *str - 48;
		str++;
	}
	arg *= ngt;
	return (arg);
}
