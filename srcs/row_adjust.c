/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_adjust.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 16:07:21 by anazar            #+#    #+#             */
/*   Updated: 2017/07/06 15:47:58 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	row_adjust(t_list *node, int new_dim)
{
	int	i;
	int	row_offset;

	i = 0;
	row_offset = new_dim + 1 - 5;
	node->offset = (int *)malloc(sizeof(int) * 4);
	while (i < 4)
	{
		node->offset[i] = (node->ind[i] / 5) * (new_dim - 4) + node->ind[i];
		++i;
	}
}
