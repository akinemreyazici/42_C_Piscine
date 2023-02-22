/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyazici <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:03:17 by akyazici          #+#    #+#             */
/*   Updated: 2022/09/11 14:09:17 by akyazici         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sonuc;

	sonuc = nb;
	while (power > 1)
	{
		sonuc *= nb;
		power--;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (sonuc);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_power(-1, 1));
}
*/
