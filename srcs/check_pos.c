/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:32:02 by anazar            #+#    #+#             */
/*   Updated: 2017/07/06 15:46:26 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_pos(char *map, t_list *node, int index)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < ROW_SIZE)
	{
		if (map[node->offset[i] + index] != '.' ||
				!map[node->offset[i] + index])
			return (-1);
		i++;
	}
	i = 0;
	while (i < ROW_SIZE)
	{
		tmp = node->offset[i] + index;
		map[tmp] = node->label;
		node->offset[i] = tmp;
		++i;
	}
	return (index);
}
