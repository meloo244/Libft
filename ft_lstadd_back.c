/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel <mel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:58:06 by mel               #+#    #+#             */
/*   Updated: 2023/03/23 19:27:57 by mel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst && new)
	{
		if (*lst)
		{
		last = ft_lstlast(*lst);
		last->next = new;
		}
		else
	*lst = new;
	}
}
// lst est le premier element de la liste
// on parcourt la liste en faisant avancer lst
// jusqu'a ce que next soit null
// on retourne lst a la fin
// si lst est null on retourne null
// si lst n'est pas null on retourne le dernier element de la liste
