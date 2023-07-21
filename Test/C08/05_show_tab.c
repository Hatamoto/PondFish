/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:32:21 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/18 12:07:54 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../C08/ex04/ft_strs_to_tab.c"
#include "../../C08/ex05/ft_show_tab.c"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	t_stock_str	*starr;	
	
	starr = ft_strs_to_tab(argc, argv);
	//while (starr->str != 0)
	//{
		ft_show_tab(starr);
	//	starr++;
	//}
}
