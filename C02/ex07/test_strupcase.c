/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strupcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:37:00 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/03 21:52:34 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strupcase.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main(void)
{
    char str[] = "kysdbkbdckgvkgu36";
	
	ft_strupcase(str);
    write(1, str, strlen(str)); 
}
