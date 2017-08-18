/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 11:04:30 by thuynh            #+#    #+#             */
/*   Updated: 2017/07/06 15:48:45 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#define BUF_SIZE 4069

static int	check_size(char *str)
{
	int		i;
	int		len;
	int		counter;

	i = 0;
	counter = -1;
	while (++counter < 4)
	{
		len = -1;
		while (len++ < 4 && str[i] != '\n')
		{
			if (str[i] != '.' && str[i] != '#')
				return (0);
			i++;
		}
		if ((len == 4 && (str[i + 1] == '.' || str[i + 1] == '#')) ||
				(counter == 3 && (str[i + 1] == '\n' || str[i + 1] == '\0')))
			i++;
		else
			return (0);
	}
	return (1);
}

static int	check_tets(char *str, int size)
{
	int		i;
	int		tags;
	int		count;

	i = 0;
	tags = 0;
	count = 0;
	while (i < size)
	{
		if (str[i] == '#')
			tags++;
		if (str[i] == '#' && str[i + 1] == '#')
			count++;
		if (str[i] == '#' && str[i + 5] == '#')
			count++;
		if (str[i] == '#' && str[i - 1] == '#')
			count++;
		if (str[i] == '#' && str[i - 5] == '#')
			count++;
		i++;
	}
	if (tags == 4 && (count == 6 || count == 8))
		return (1);
	return (0);
}

int			check_list(int file, t_list *node)
{
	int		i;
	char	buf[BUF_SIZE];
	int		ret;
	int		last_ret;

	i = 0;
	while ((ret = read(file, &buf, 21)))
	{
		if (!(check_size(buf)) || ret < 20 ||
			!(check_tets(buf, ft_strlen(buf) - 1)))
			return (0);
		if (!save_tets(buf, node, i))
		{
			del_list(node);
			node = NULL;
			return (0);
		}
		i++;
		last_ret = ret;
	}
	if (i > 26 || last_ret != 20)
		return (0);
	return (i);
}
