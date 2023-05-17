/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 01:29:58 by mmarie            #+#    #+#             */
/*   Updated: 2023/02/16 01:37:08 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	temp;
	void	*buffer;

	if (nmemb == 0 || size == 0)
		return ((void *) malloc(0));
	temp = nmemb * size;
	if (!(size == temp / nmemb))
		return (NULL);
	buffer = (void *) malloc(temp);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, temp);
	return (buffer);
}
