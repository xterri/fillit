/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 19:21:16 by anazar            #+#    #+#             */
/*   Updated: 2017/06/14 23:02:31 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_find(char *str, char *to_find)
{
	size_t	i;
	size_t	tf_len;
	size_t	st_len;
	char	*substr;

	i = 0;
	st_len = ft_strlen(str);
	tf_len = ft_strlen(to_find);
	while (i < st_len)
	{
		substr = ft_strsub(str, i, tf_len);
		if (ft_strcmp(substr, to_find) == 0)
		{
			ft_strdel(&substr);
			return (i);
		}
		ft_strdel(&substr);
		++i;
	}
	return (-1);
}
