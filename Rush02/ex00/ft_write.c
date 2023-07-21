/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:49:59 by mburakow          #+#    #+#             */
/*   Updated: 2023/07/16 23:03:47 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_dict_line.h"
//#include "ft_header.h"
#include "ft_print_dict.c"

int		ft_make_dict(char *buff, int lines, struct s_dict_line **dict);
int		ft_count_lines(char *buff); 
int 	get_dindex(char *buff, int *index);
char    *get_dstr(char *buff, int *index);	
char    *keytostr(int key, struct s_dict_line **dict);

struct s_dict_line **ft_write(long nbr)
{
	int							file;
	unsigned long				i;
	char						buff[1024];
	int							bts_read;
	int							bts_total;
	int							lines;
	static	struct s_dict_line	*dict;

	bts_read = 0;
	bts_total = 0;
	file = open("numbers.dict", O_RDONLY);
	if (file == -1) {
        write(2, "Error opening file.\n", 19);
        return (NULL);
    }
	i = 0;
	while (i < sizeof(buff))
	{
		buff[i] = '\0';
		i++;
	}
	i = 0;
	while ((bts_read = read(file, buff, 1024)) > 0) 
	{
		bts_total += bts_read;
		i++;
		if (i >= 1024)
		{
			write(2, "Buffer full...\n", 14);
			break;
		}
		write(1, buff, bts_read); 
	}
	// EOB: bts_total
	//printf("%d bytes read.\n", bts_total);
	buff[bts_total] = '\0';
	if (bts_read == -1) {
        write(2, "Error reading from file.\n", 24);
        close(file);
        return (NULL);
    }
	close(file);
	lines = ft_count_lines(buff);
	ft_make_dict(buff, lines, &dict);
	//printf(" : 0 in letters: %s", keytostr(0, &dict));
	//ft_print_dict(&dict);
	nbr = 0;
	return (&dict);
}

char    *keytostr(int key, struct s_dict_line **dict)
{
    int     i;

    i = 0;
    while ((*dict)[i].str)
    {
        if ((*dict[i]).index == key)
            return ((*dict)[i].str);
        ++i;
    }
    return (NULL);
}

int		ft_count_lines(char *buff)
{
	int	row_count;
	int	i;

	i = 0;
	row_count = 0;
	while (buff[i] != '\0')
		{
			if (buff[i] == ':')
				row_count++;
			i++;
		}
	row_count++;
	return(row_count);
}
	
int	ft_make_dict(char *buff, int lines, struct s_dict_line **dict)
{
	int 	f_ind;
	int		*index;
	int		line;

	//printf ("Making the dictionary.\n");
	*dict = malloc((lines) * sizeof(struct s_dict_line));
	if (!(*dict))
	{
		return (0);
	}
	//printf ("Allocated dict.\n");
	f_ind = 0;
	index = &f_ind;
	line = 0;
	while (line < lines)
	{
		(*dict)[line].index = get_dindex(buff, index);
		(*dict)[line].str = get_dstr(buff, index);
		if (index == '\0')
        	break;
		//printf("Line: %d/%d, key: %d\n", line, lines, (*dict)[line].index);
		line++;
	}
	//printf("done %d lines.", line);
	(*dict)[line - 2].index = -1;
	(*dict)[line - 2].str = NULL;
	//printf("Line: %d/%d, index: %d", line, lines, *index);
	return (lines);
}

int get_dindex(char *buff, int *index)
{
	int 	i;
	int		retval;

	i = 0;
	//printf("[%d]\t", *index);
	retval= 0;
	if (buff[*index + i] == '\0')
		return (-1);
	while (buff[*index + i] == 10)
		i++;
	while (buff[*index + i] == 32)
		i++;
	while (buff[*index + i] >= 48 && buff[*index + i] <= 57)
	{
		retval *= 10;
		retval += (buff[*index + i] - 48);
		i++;
	}
	while (buff[*index + i] != ':' && buff[*index + i] != '\0')
	{
		i++;
	}
	if (buff[*index + i] == '\0')
		
	i++;
	//printf(" Got key: %d : ", retval);
	//write(1, retval, 4);
	(*index) += i;
	return (retval);
}

char	*get_dstr(char *buff, int *index)
{
	int		i;
	int 	len;
	char	*dstr;

	i = 0;
	len = 0;
	while (buff[*index + i] != '\n' && buff[*index + i] != '\0')
	{
		if (buff[*index + i] == '\0')
			return NULL;
		len++;
		i++;
	}
	dstr = malloc((len + 1) * sizeof(char));
	if (dstr == NULL)
	{
		write(2, "Error allocating string.\n", 24); 
		return (NULL);
	}
	i = 0;
	while (buff[*index + i] != '\n' && buff[*index + i] != '\0')
	{
		dstr[i] = buff[*index + i];
		i++;
	}
	dstr[i] = '\0';
	//printf(" Got string: %s \t\t", dstr);
	(*index) += i;
	i = 0;
	while (dstr[i])
	{
		write(1, &dstr[i], 1);
		i++;
	}
	if (buff[*index] == '\0')
        return NULL;
	return (dstr);
}

/*
	if (nbr >= 1000000000)
	{
		// get the billions
		wnbr = nbr / 1000000000);
		if (wnbr / 100)
			// write digit + hundred
			wnbr %= 100
		if (wnbr / 10)
			if (wnbr / 10 == 1)
				// write teens and finish
			else
				// write tens
				wnbr %= 10
				// write single digit
	}
}
*/
