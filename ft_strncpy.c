/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 23:19:38 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/15 02:44:52 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s;

	s = dst;
	while (*src && len > 0)
	{
		*s++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*s++ = 0;
		len--;
	}
	return (dst);
}
