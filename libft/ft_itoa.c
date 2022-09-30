/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:33:01 by carlfern          #+#    #+#             */
/*   Updated: 2022/09/26 14:21:18 by carlfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_number_size(int n);

char	*ft_itoa(int n)
{
	char	*ptr;
	int		ns;

	ns = ft_number_size(n);
	ptr = (char *)malloc(ns-- * sizeof(char));
	if (!ptr)
		return (0);
	ptr[ns--] = 0;
	if (n < 0)
		ptr[0] = '-';
	else if (n == 0)
		ptr[0] = '0';
	while (n)
	{
		if (n > 0)
			ptr[ns--] = ("0123456789")[n % 10];
		else
			ptr[ns--] = ("0123456789")[n % 10 * -1];
		n = n / 10;
	}
	return (ptr);
}

int	ft_number_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (12);
	else if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 9)
	{	
		n = n / 10;
		size++;
	}
	size += 2;
	return (size);
}
