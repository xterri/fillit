/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 09:52:21 by thuynh            #+#    #+#             */
/*   Updated: 2017/07/06 15:48:19 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error(int nbr)
{
	if (nbr == 1)
		ft_putendl("usage: ./fillit.c source_file");
	else if (nbr == 2)
		ft_putendl("error");
}
