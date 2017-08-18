/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 10:31:45 by anazar            #+#    #+#             */
/*   Updated: 2017/06/13 17:14:16 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			i;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == (unsigned char)c)
			return (&cdest[i + 1]);
		++i;
	}
	return (NULL);
}
