/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel <mel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:36:38 by mel               #+#    #+#             */
/*   Updated: 2023/03/23 19:28:59 by mel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
// && regarde si les deux ne sont pas null et si c'est le cas il fait le reste
// si l'un des deux est null il ne fait rien
// new est le nouvel element qu'on veut ajouter et next est le pointeur 
//sur le prochain element
