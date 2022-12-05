/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:04:27 by motroian          #+#    #+#             */
/*   Updated: 2022/11/22 16:19:43 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtab(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if ((str[i] == c) && (i != 0) && (str[i - 1] != c))
			j++;
		i++;
	}
	return (j);
}

int	ft_slen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	return (i);
}

char	**ft_free(char **tab, int j)
{
	while (j)
		free(tab[j--]);
	free (tab);
	return (NULL);
}

char	**ft_decoupe(char **tab, char *str, int k, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			tab[j] = malloc(sizeof(char) * (ft_slen(&str[i], c) + 1));
			if (!tab)
				return (ft_free(tab, j));
			while ((str[i]) && (str[i] != c))
				tab[j][k++] = str[i++];
			tab[j][k] = '\0';
			j++;
			k = 0;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		k;
	char	**tab;
	char	*str;

	k = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	tab = malloc(sizeof(char *) * (ft_strtab(str, c) + 1));
	if (!tab)
		return (NULL);
	tab = ft_decoupe(tab, str, k, c);
	return (tab);
}
