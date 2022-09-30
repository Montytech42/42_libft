/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <carlfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:03:31 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/26 18:37:10 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	else if (!n || dst == src)
		return (dst);
	else
	{
		while (n-- > 0)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	return (dst);
}
