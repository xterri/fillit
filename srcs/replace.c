/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 18:02:27 by thuynh            #+#    #+#             */
/*   Updated: 2017/07/06 15:46:41 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	replace(char *str, int find, int rep)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == find)
			str[i] = rep;
		i++;
	}
}
