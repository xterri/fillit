/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_tets.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 18:06:58 by thuynh            #+#    #+#             */
/*   Updated: 2017/07/06 15:47:47 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	store_indicies(char *str, int *arr)
{
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			pos = i;
			break ;
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
			*arr++ = i - pos;
		i++;
	}
}

static int	*get_indices(char *str)
{
	int		i;
	int		j;
	int		*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * 4);
	store_indicies(str, arr);
	while (i < 4)
	{
		if (arr[i] == 9 || arr[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				arr[j] = arr[j] + 1;
				j++;
			}
			i = 0;
		}
		else
			i++;
	}
	return (arr);
}

int			save_tets(char *str, t_list *node, int index)
{
	t_list	*trav;
	t_list	*curr;

	trav = node;
	if (!trav->ind)
		trav->ind = get_indices(str);
	else
	{
		while (trav->next)
			trav = trav->next;
		if (!(trav->next = (t_list *)ft_memalloc(sizeof(t_list))))
			return (0);
		curr = trav;
		trav = trav->next;
		trav->ind = get_indices(str);
		trav->prev = curr;
	}
	trav->offset = trav->ind;
	trav->label = index + 'A';
	trav->next = NULL;
	return (1);
}
