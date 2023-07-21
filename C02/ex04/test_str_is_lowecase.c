/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_is_lowecase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:05:31 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/03 18:13:10 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	main(void)
{
	char str[] = "bbkajebyefbhkbajgSDHHFDDFJRBBehbvadhedkjvdp";
	printf("returned %d", ft_str_is_lowercase(str));
}
