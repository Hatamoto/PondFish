/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:18:17 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/13 13:15:53 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strwrite(char *arr, int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	static long	csize;
	char		*arr;

	if (size == 0)
	{
		arr = malloc(0);
		return (arr);
	}
	i = 0;
	csize = 0;
	while (i < size)
	{
		csize += ft_strlen(strs[i]);
		if (i < size - 1)
			csize += ft_strlen(sep);
		i++;
	}
	arr = (char *)malloc(csize * sizeof(char));
	arr[csize - 1] = '\0';
	i = 0;
	arr = ft_strwrite(arr, size, strs, sep);
	return (arr);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		++length;
	}
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strwrite(char *arr, int size, char **strs, char *sep)
{
	int		i;

	i = 0;
	while (arr[i])
	{
		arr[i] = '\0';
		i++;
	}
	i = 0;
	while (i < size)
	{
		arr = ft_strcat(arr, strs[i]);
		if (i < size - 1)
			arr = ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}
