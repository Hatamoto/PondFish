/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcapitalize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:16:00 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/05 11:12:31 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcapitalize.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
    char str[] = "salUt, commEnt tu vas ? 42mOts quarAnte-deux; cinquante+et+un";
	
	ft_strcapitalize(str);
    write(1, str, strlen(str)); 
}
