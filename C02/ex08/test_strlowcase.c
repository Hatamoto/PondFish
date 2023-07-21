/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlowcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:10:35 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/06 19:01:04 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlowcase.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main(void)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	ft_strlowcase(str);
    write(1, str, strlen(str)); 
}
