/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 12:33:15 by anazar            #+#    #+#             */
/*   Updated: 2017/06/07 16:40:32 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sl;
	size_t	dl;
	size_t	i;

	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	i = 0;
	if (size < dl + 1)
		return (sl + size);
	if (size > dl + 1)
	{
		while (i + dl < size - 1)
		{
			dest[i + dl] = src[i];
			++i;
		}
		dest[i + dl] = 0;
	}
	return (dl + sl);
}
