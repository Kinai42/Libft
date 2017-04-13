/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 22:39:08 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/13 00:53:38 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	end = ft_strlen(s);
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t') && s[start])
		start++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && s[end])
		end--;
	return (ft_strsub(s, start, (end - start + 1)));
}
