/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:19:28 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/01 11:44:44 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a1, b1;
	int div1, mod1;

	a1 = 9;
	b1 = 2;

	ft_div_mod(a1, b1, &div1, &mod1);

	printf("div: %d, mod: %d", div1, mod1);
}
*/
