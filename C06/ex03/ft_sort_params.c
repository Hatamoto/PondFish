/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:35:30 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/12 10:20:41 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_swap(char **str1, char **str2);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	else if (argc == 2)
		ft_putstr(argv[1]);
	else
	{
		ft_sort(argc, argv);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}

void	ft_sort(int argc, char **argv)
{
	int	pass;
	int	i;

	pass = 0;
	i = 1;
	while (pass < argc - 1)
	{	
		while (i < argc - 1 - pass)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
	i = 1;
	++pass;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **str1, char **str2)
{
	char	*t;

	t = *str1;
	*str1 = *str2;
	*str2 = t;
}
