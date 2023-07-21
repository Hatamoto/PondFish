/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:02:40 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/20 21:13:10 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	**alloc_words(char *str, char *charset, char **split_str);
char	*make_word(char *str, char *charset);
char	**alloc_wlen(char *str, char *charset, char **split_str);
int		check_sep(char str, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**split_str;

	split_str = NULL;
	split_str = alloc_words(str, charset, split_str);
	split_str = alloc_wlen(str, charset, split_str);
	return (split_str);
}

char	**alloc_words(char *str, char *charset, char **split_str)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0' && check_sep(str[i], charset) == 0)
			words++;
		while (str[i] != '\0' && check_sep(str[i], charset) == 0)
			i++;
	}
	split_str = malloc((words + 1) * sizeof(char *));
	if (split_str == 0)
		return (0);
	split_str[words] = 0;
	return (split_str);
}

char	*make_word(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] != 0 && check_sep(str[i], charset) == 0)
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (word == 0)
		return (0);
	word[i] = '\0';
	i = 0;
	while (str[i] != 0 && check_sep(str[i], charset) == 0)
	{
		word[i] = str[i];
		i++;
	}
	if (word == 0)
		return (0);
	return (word);
}

char	**alloc_wlen(char *str, char *charset, char **split_str)
{	
	int		index;
	char	*p;
	int		i;

	i = 0;
	index = -1;
	while (str[i])
	{
		while (str[i] != '\0' && check_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0' && check_sep(str[i], charset) == 0)
		{
			index++;
			p = &str[i];
			split_str[index] = make_word(p, charset);
			if (split_str[index] == 0)
				return (0);
			i++;
		}
		while (str[i] != '\0' && check_sep(str[i], charset) == 0)
			i++;
	}
	return (split_str);
}

int	check_sep(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc != 3)
		return (0);
	split = ft_split(argv[1], argv[2]);
	printf("Back in main.");
	i = 0;
	while (split[i] != 0)
	{
		printf("%d : %s", i, split[i]);
		i++;
	}
	free(split);
	return (0);
}
