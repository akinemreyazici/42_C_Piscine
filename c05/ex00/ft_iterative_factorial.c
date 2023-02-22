/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyazici <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:37:00 by akyazici          #+#    #+#             */
/*   Updated: 2022/09/11 13:58:03 by akyazici         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	sonuc;

	sonuc = 1;
	while (nb > 0)
	{
		sonuc *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (sonuc);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(4));
}
*/		
