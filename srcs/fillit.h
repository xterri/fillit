/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 17:38:46 by thuynh            #+#    #+#             */
/*   Updated: 2017/07/05 14:15:47 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

# define ROW_SIZE 4

typedef struct		s_list
{
	int				*ind;
	int				*offset;
	int				label;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

void				error(int nb);
int					check_list(int file, t_list *node);
int					save_tets(char *str, t_list *node, int index);
char				*make_grid(int n, t_list *node);
void				print_grid(char *str);
void				row_adjust(t_list *node, int new_dim);
void				ft_maplst(t_list *node, int new_dim,
					void (*f)(t_list *, int));
void				del_list(t_list *node);
void				replace(char *str, int find, int rep);
int					find_pos(char *map);
void				tet_reset(t_list *trav);
void				clear_tets(char *map, t_list *node);
void				insert_newlines(char *map, int n);
int					check_pos(char *map, t_list *node, int index);
void				map_reset(char *map, t_list *trav);
t_list				*next_piece(char *map, t_list *trav);
t_list				*backtrack(char *map, t_list *trav);
char				*clean_map(char *map, t_list *trav, int i);
#endif
