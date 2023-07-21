/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:09:37 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/02 12:46:12 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.c"
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	teststr1[] = "Mitas tassa Ritari Assa?";
	char	teststr2[] = "Mitas kuuluu kukkuluuruu?";

	printf("%s", teststr2);
	ft_strcpy(teststr2, teststr1);
	printf("%s", teststr2); 	
}	
