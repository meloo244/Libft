/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel <mel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:34:10 by mel               #+#    #+#             */
/*   Updated: 2023/03/23 19:34:39 by mel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
	lst = lst->next;
	}
	return (new);
}
// lst est le premier element de la liste
// on parcourt la liste en faisant avancer lst
// et on applique la fonction f au content de lst
// on cree un nouvel element avec le resultat de f
// et on l'ajoute a la fin de la nouvelle liste
// on retourne la nouvelle liste
// si on a une erreur on libere la liste et on retourne NULL
