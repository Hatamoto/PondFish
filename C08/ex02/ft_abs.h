/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:34:59 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/14 13:11:39 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS ft_absolute

int	ft_absolute(int val)
{
	if (val < 0)
		val *= -1;
	return (val);
}
#endif
