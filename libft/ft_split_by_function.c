/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_by_function.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 19:09:11 by anazar            #+#    #+#             */
/*   Updated: 2017/07/03 19:01:59 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_words(const char *s, int (*f)(char))
{
	int		num;

	num = 0;
	while (*s && f)
	{
		while (f(*s))
			++s;
		if (!f(*s) && *s)
		{
			++num;
			while (!f(*s) && *s)
				++s;
		}
	}
	return (num);
}

static int	get_word_len(const char *s, int start, int (*f)(char))
{
	int		i;

	i = 0;
	while (!f(s[start + i]) && s[i])
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

char		**ft_split_by_function(char const *s, int (*f)(char))
{
	char	**words;
	int		num_words;
	int		i;
	int		start;
	int		l;

	i = -1;
	start = 0;
	if (!s || !f)
		return (NULL);
	num_words = get_num_words(s, f);
	if (!(words = (char **)malloc(sizeof(char *) * num_words)))
		return (NULL);
	while (i < num_words)
	{
		l = get_word_len(s, start, f);
		if (l > 0)
			words[++i] = ft_get_word(s, start, l);
		start += (l + 1);
	}
	words[i] = 0;
	return (words);
}
