/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_is_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:35:44 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/03 17:37:06 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_alpha.c"
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	test[] = "abcdef$ghijklmnopqrstuvABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("returned %d", ft_str_is_alpha(test));
}
