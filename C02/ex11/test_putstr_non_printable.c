/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_non_printable.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 08:38:54 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/07 07:49:23 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr_non_printable.c"

int	main(void)
{
	char str[] = "Coucou\ntu vas bien ? Rest: \a\b\e\f\n\r\t\v\'\"\?\\ :End";
	ft_putstr_non_printable(str);
}
