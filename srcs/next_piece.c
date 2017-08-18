/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:36:48 by anazar            #+#    #+#             */
/*   Updated: 2017/07/06 15:46:08 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*next_piece(char *map, t_list *trav)
{
	trav = trav->next;
	if (find_pos(map))
		map_reset(map, trav);
	return (trav);
}
