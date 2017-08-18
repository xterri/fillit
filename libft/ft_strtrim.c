/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 10:36:42 by anazar            #+#    #+#             */
/*   Updated: 2017/06/19 10:57:48 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		f;
	int		l;
	char	*str;

	if (!s)
		return (NULL);
	f = 0;
	l = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[f]) && s[f])
		++f;
	while (ft_iswhitespace(s[l]) && f < l)
		--l;
	if (!(str = ft_strsub(s, f, (l - f) + 1)))
		return (NULL);
	return (str);
}
