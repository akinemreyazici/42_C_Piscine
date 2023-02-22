/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyazici <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:58:29 by akyazici          #+#    #+#             */
/*   Updated: 2022/09/11 14:02:45 by akyazici         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	sonuc;

	sonuc = 1;
	if (nb > 0)
	{
		sonuc *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (sonuc);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_recursive_factorial(-1));
}
*/
