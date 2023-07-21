/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_is_uppercase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:17:30 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/03 18:18:41 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	main(void)
{
	char str[] = "JDJFHHiFIFHDKHRH";
	printf("returned %d", ft_str_is_uppercase(str));
}
