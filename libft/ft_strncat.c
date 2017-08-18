/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 12:31:31 by anazar            #+#    #+#             */
/*   Updated: 2017/06/07 16:27:52 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t nb)
{
	int		dl;
	size_t	i;

	dl = ft_strlen(dest);
	i = -1;
	while (++i < nb && *(src + i))
		dest[i + dl] = src[i];
	dest[i + dl] = '\0';
	return (dest);
}
