/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 14:54:26 by anazar            #+#    #+#             */
/*   Updated: 2017/06/14 23:26:02 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*arr1;
	char	*arr2;
	int		out;

	arr1 = ft_strsub(s1, 0, n);
	arr2 = ft_strsub(s2, 0, n);
	out = ft_strcmp(arr1, arr2);
	ft_strdel(&arr1);
	ft_strdel(&arr2);
	return (out);
}
