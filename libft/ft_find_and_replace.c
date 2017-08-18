/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_and_replace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 19:05:11 by anazar            #+#    #+#             */
/*   Updated: 2017/06/14 23:21:10 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*repl_recur(char *buf, char *str, char *tf, char *tr)
{
	int		pos;
	int		l;

	pos = ft_find(str, tf);
	if (pos != -1)
		l = ft_strlen(tf);
	else
	{
		ft_strcat(buf, str);
		ft_strdel(&str);
		return (buf);
	}
	ft_strcat(buf, ft_strsub(str, 0, pos));
	ft_strcat(buf, tr);
	return (repl_recur(buf, ft_strsub(str, pos + l, ft_strlen(str)), tf, tr));
}

char		*ft_find_and_replace(char *str, char *tf, char *tr)
{
	char	*buf;
	char	*st;

	if (!(buf = ft_strnew(ft_strlen(str) * ft_strlen(tr))))
		return (NULL);
	if (!(st = ft_strnew(ft_strlen(str))))
		return (NULL);
	ft_strcpy(st, str);
	if ((int)ft_find(st, tf) == -1)
	{
		ft_strdel(&buf);
		return (st);
	}
	else
		return (repl_recur(buf, st, tf, tr));
}
