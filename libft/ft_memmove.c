/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 10:49:05 by anazar            #+#    #+#             */
/*   Updated: 2017/06/08 22:56:01 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	i = -1;
	csrc = (char *)src;
	cdst = (char *)dst;
	if (csrc < cdst)
	{
		while ((int)(--len) >= 0)
			*(cdst + len) = *(csrc + len);
	}
	else
	{
		while (++i < len)
			*(cdst + i) = *(csrc + i);
	}
	return (dst);
}
