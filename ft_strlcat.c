/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:13:48 by motroian          #+#    #+#             */
/*   Updated: 2022/11/19 17:05:40 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && dst[i])
		i++;
	j = i + ft_strlen(src);
	dst += i;
	if (size != i)
	{
		while (*src)
		{
			if (size > i + 1)
			{
				*dst++ = *src;
				size--;
			}
			src++;
		}
		*dst = 0;
	}
	return (j);
}
