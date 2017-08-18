/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_by_delims.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 15:50:55 by anazar            #+#    #+#             */
/*   Updated: 2017/07/03 19:02:51 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delim(char c, char *delims)
{
	while (*delims)
	{
		if (c == *delims)
			return (1);
		++delims;
	}
	return (0);
}

static int	get_num_words(const char *s, char *delim)
{
	int		num;

	num = 0;
	while (*s)
	{
		while (is_delim(*s, delim))
			++s;
		if (!is_delim(*s, delim) && *s)
		{
			++num;
			while (!is_delim(*s, delim) && *s)
				++s;
		}
	}
	return (num);
}

static int	get_word_len(const char *s, int start, char *delim)
{
	int		i;

	i = 0;
	while (!is_delim(s[start + i], delim) && s[i])
		++i;
	return (i);
}

static char	*ft_get_word(const char *str, int start, int l)
{
	char	*word;

	if (!(word = ft_strnew(l)))
		word = NULL;
	word = ft_strsub(str, start, l);
	return (word);
}

char		**ft_split_by_delims(char const *s, char *c)
{
	char	**words;
	int		num_words;
	int		i;
	int		start;
	int		l;

	i = -1;
	start = 0;
	if (!s)
		return (NULL);
	num_words = get_num_words(s, c);
	if (!(words = (char **)malloc(sizeof(char *) * num_words)))
		return (NULL);
	while (i < num_words)
	{
		l = get_word_len(s, start, c);
		if (l > 0)
			words[++i] = ft_get_word(s, start, l);
		start += (l + 1);
	}
	words[i] = 0;
	return (words);
}
