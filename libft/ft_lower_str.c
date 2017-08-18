/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 22:25:17 by anazar            #+#    #+#             */
/*   Updated: 2017/06/09 19:57:26 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_lower_str(char *str)
{
	int		i;
	int		len;
	char	*st;

	i = 0;
	len = ft_strlen(str);
	st = ft_strnew(len);
	while (i < len)
	{
		if (ft_isupper(str[i]))
			st[i] = ft_tolower(str[i]);
		else
			st[i] = str[i];
		++i;
	}
	return (st);
}
