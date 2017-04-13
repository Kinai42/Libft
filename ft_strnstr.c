/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:13:32 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/13 00:41:03 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*s1dr;

	if (!*s2)
		return ((void *)s1);
	s1dr = (void *)s1;
		while (len-- && *s1)
		{
			s1dr = (char *)s1;
			while (*s1dr++ == *s2++ && len--)
			{
				if (!s2)
					return ((void *)s1);
			}
			s1++;
		}
	return (NULL);
}
