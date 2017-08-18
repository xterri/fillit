/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 12:29:30 by anazar            #+#    #+#             */
/*   Updated: 2017/06/05 13:43:52 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int sl;
	int dl;
	int i;
	int fl;

	dl = ft_strlen(dest);
	i = dl;
	sl = ft_strlen(src);
	fl = dl + sl;
	while (i < fl)
	{
		dest[i] = src[i - dl];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
