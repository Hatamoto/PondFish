/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:34:55 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/02 13:33:03 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "Lala!";
	printf("Length is %d", ft_strlen(str));
}
