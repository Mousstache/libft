/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:14:19 by motroian          #+#    #+#             */
/*   Updated: 2022/11/18 21:18:10 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *cont)
{
	t_list	*retour;

	retour = malloc(sizeof(t_list));
	if (!retour)
		return (NULL);
	retour->content = cont;
	retour->next = NULL;
	return (retour);
}
/*
int		main(void)
{
 char	*str = "bonjour";
 	char	*s = "chien";
 	t_list	*elem;

	elem = ft_lstnew((void *)str);
	elem->next = ft_lstnew((void *)s);
	printf("%s\n",(char *) elem->content);
	printf("%s\n",(char *) elem->next->content);
}*/
