/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyazici <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:34:24 by akyazici          #+#    #+#             */
/*   Updated: 2022/09/11 16:42:56 by akyazici         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb <= 1)
		return (0);
	while (index <= (nb / 2))
	{
		if (nb % index == 0)
			return (0);
		else
			index++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_is_prime(37));
}
*/
