/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 22:27:31 by anazar            #+#    #+#             */
/*   Updated: 2017/06/09 19:56:23 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_upper_str(char *str)
{
	int		i;
	int		len;
	char	*st;

	i = 0;
	len = ft_strlen(str);
	st = ft_strnew(len);
	while (i < len)
	{
		if (ft_islower(str[i]))
			st[i] = ft_toupper(str[i]);
		else
			st[i] = str[i];
		++i;
	}
	return (st);
}
