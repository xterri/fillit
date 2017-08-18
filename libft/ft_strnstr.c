/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 19:31:45 by anazar            #+#    #+#             */
/*   Updated: 2017/06/08 21:58:44 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *str, const char *tf, size_t len)
{
	size_t		str_it;
	size_t		tf_it;
	size_t		i;
	int			found;

	if (!ft_strlen(tf))
		return ((char *)str);
	str_it = -1;
	found = 0;
	while (str[++str_it] && str_it < len)
	{
		tf_it = 0;
		if (str[str_it] == *tf)
		{
			i = str_it;
			found = 1;
			while (str[i] && tf[tf_it] && tf_it < len && i < len)
				if (str[i++] != tf[tf_it++])
					found = 0;
			if (found && !tf[tf_it])
				return ((char *)str + str_it);
		}
	}
	return (NULL);
}
