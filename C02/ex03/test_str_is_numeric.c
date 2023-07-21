/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_is_numeric.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:51:54 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/03 17:57:05 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_numeric.c"

int	main(void)
{
	char str[] = "12538&#^ddhdfs44907653735427";
	printf("returned %d", ft_str_is_numeric(str));
}
