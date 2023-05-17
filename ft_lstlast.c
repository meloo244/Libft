/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel <mel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:51:33 by mel               #+#    #+#             */
/*   Updated: 2023/03/23 19:27:50 by mel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
		lst = lst->next;
	}
	return (lst);
}
// lst est le premier element de la liste
// on parcourt la liste en faisant avancer lst
// jusqu'a ce que next soit null
// on retourne lst a la fin
// si lst est null on retourne null
// si lst n'est pas null on retourne le dernier element de la liste
// on peut aussi faire: return (lst ? ft_lstlast(lst->next) : lst);
