/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 00:54:18 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/13 20:45:55 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	size_t	word;
	size_t	boo;

	word = 0;
	while (*s)
	{
		boo = 0;
		while (*s && *s == c)
			s++;
		while (*s++ && *s != c)
			boo = 1;
		if (boo == 1)
			word++;
	}
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;

	if (!(tab = (char **)malloc(sizeof(char *) * count_words(s, c))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s) 
			s++;
		if (*s)
			if (!(tab[i++] = ft_strsub((char *)s, 0, (ft_strrlen(s, c)))))
				return (ft_cleaner(tab, i));
		while (*s != c && *s)
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
