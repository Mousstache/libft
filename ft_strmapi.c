/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:04:57 by motroian          #+#    #+#             */
/*   Updated: 2022/11/20 19:08:01 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*cpy;

	if (!s)
		return (ft_strdup(""));
	cpy = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!cpy)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		cpy[j] = (*f)(i, s[i]);
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
