/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 18:42:38 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/14 20:40:34 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*fresh;

	if (!s || !(f))
		return (NULL);
	len = ft_strlen(s);
	if (!(fresh = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	fresh[len] = '\0';
	len = 0;
	while (s[len])
	{
		fresh[len] = (*f)(s[len]);
		len++;
	}
	return (fresh);
}
