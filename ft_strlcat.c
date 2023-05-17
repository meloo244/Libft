/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel <mel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:32:31 by mmarie            #+#    #+#             */
/*   Updated: 2023/02/21 01:17:44 by mel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dst && !src)
		return (0);
	i = 0;
	j = 0;
	while (dst[i] && i < size)
	i++;
	while (src[j] && i + j + 1 < size)
	{	
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
