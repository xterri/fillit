/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 09:56:11 by thuynh            #+#    #+#             */
/*   Updated: 2017/07/06 15:48:09 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		file;
	int		tet_nb;
	char	*grid;
	t_list	*root;

	if (argc == 2)
	{
		file = open(argv[1], O_RDONLY);
		root = (t_list *)ft_memalloc(sizeof(t_list));
		if (file == -1 || !(tet_nb = check_list(file, root)))
		{
			error(2);
			close(file);
			return (0);
		}
		close(file);
		grid = make_grid(tet_nb, root);
		ft_putstr(grid);
	}
	else
		error(1);
	return (0);
}
