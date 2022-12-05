/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:08:49 by motroian          #+#    #+#             */
/*   Updated: 2022/11/09 19:24:45 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s2;
	int		i;

	s2 = (char *)s;
	i = 0;
	while (n > 0)
	{
		s2[i] = '\0';
		i++;
		n--;
	}
}