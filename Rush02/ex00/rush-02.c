/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:10:03 by eleppala          #+#    #+#             */
/*   Updated: 2023/07/16 22:52:34 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
//#include "ft_header.h"
#include "ft_write.c"
#include "ft_latoi.c"

long				handler(char *src);
struct s_dict_line 	**ft_write(long nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		handler(argv[1]);
		//printf("Main print: %li\n", handler(argv[1]));
	}
	else if (argc == 3)
	{
		//printf("Dict name: %s\n", argv[1]);
		//printf("Main print: %li\n", handler(argv[2]));
	}
	else
		write(2, "ERROR\n", 6);
	return (0);
}

long	handler(char *src)
{
	long				nbr;
	struct s_dict_line	*dict;
	int					i;

	nbr = ft_latoi(src);
	if (nbr < 0 || nbr > 4294967295)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	//printf("Handler print: %li\n", nbr);	
	dict = *ft_write(nbr);
	//printf("0 in letters: %s", keytostr(0, &dict));
	i = 0;
	while (dict[i].str != NULL) 
	{
    	free(dict[i].str);
		i++;
	}
	free(dict);
	return (nbr);
}


	
/*
 * min max handling for toi
 *
 * 
 * */

