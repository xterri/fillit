/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 18:03:31 by thuynh            #+#    #+#             */
/*   Updated: 2017/07/06 15:47:09 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		find_pos(char *map)
{
	int		i;

	i = 0;
	while (map[i])
	{
		if (map[i] == '*')
			return (1);
		++i;
	}
	return (0);
}
