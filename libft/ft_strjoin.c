/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 16:01:33 by anazar            #+#    #+#             */
/*   Updated: 2017/06/11 14:07:10 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		f_len;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	f_len = ft_strlen(s1);
	len = f_len + ft_strlen(s2);
	i = 0;
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (i < f_len)
	{
		str[i] = s1[i];
		++i;
	}
	while (i < len)
	{
		str[i] = s2[i - f_len];
		++i;
	}
	return (str);
}
