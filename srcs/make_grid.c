/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 21:01:03 by thuynh            #+#    #+#             */
/*   Updated: 2017/07/06 15:48:30 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	place_tets(char *map, t_list *trav, int i)
{
	int		result;

	result = 0;
	while (trav)
	{
		i = -1;
		while (map[++i])
		{
			if ((result = check_pos(map, trav, i)) != -1)
				break ;
			map = clean_map(map, trav, i);
		}
		if (!map[i])
		{
			if (!trav->prev)
				return (0);
			if (result == -1 && trav->prev && (trav = backtrack(map, trav)))
				continue ;
		}
		if (trav->next)
			trav = next_piece(map, trav);
		else
			return (1);
	}
	return (0);
}

static char	*new_grid(int len, int min_size)
{
	char	*grid;

	if (!(grid = ft_strnew(len)))
		return (NULL);
	grid = ft_memset(grid, '.', len - 1);
	insert_newlines(grid, min_size);
	return (grid);
}

char		*make_grid(int n, t_list *node)
{
	int		min_size;
	int		len;
	char	*grid;

	min_size = 0;
	while (min_size * min_size < n * 4)
		min_size++;
	while (1)
	{
		len = min_size * min_size + min_size + 1;
		grid = new_grid(len, min_size);
		ft_maplst(node, min_size, &row_adjust);
		if (place_tets(grid, node, 0))
			break ;
		ft_strdel(&grid);
		ft_memdel((void *)&node->offset);
		++min_size;
	}
	return (grid);
}
