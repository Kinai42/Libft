/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 00:44:37 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/13 00:44:42 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *cp1;
	char *cp2;

	if (!*s2)
		return ((void *)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			cp1 = (void *)s1;
			cp2 = (void *)s2;
			while (*cp1 && *cp2 && *cp1 == *cp2)
			{
				cp1++;
				cp2++;
			}
			if (!*cp1)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
