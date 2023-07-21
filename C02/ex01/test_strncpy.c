/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:00:24 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/05 12:09:29 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncpy.c"
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	teststr1[] = "Ritari Assa?";
	char	teststr2[] = "Mitas tassa hah?";
	int		len;

	len = sizeof(teststr2) / sizeof(teststr2[0]);
	ft_strncpy(teststr2, teststr1, len);
	write(1, teststr2, len);
	write(1, "\n", 1);
	strncpy(teststr2, teststr1, len);
	write(1, teststr2, len);
}	
