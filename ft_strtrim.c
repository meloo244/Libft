/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel <mel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:09:00 by mel               #+#    #+#             */
/*   Updated: 2023/02/20 09:32:36 by mel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	b;

	i = 0;
	b = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
	i++;
	while (b >= i && ft_strchr(set, s1[b]))
	b--;
	return (ft_substr(s1, i, b - i + 1));
}
