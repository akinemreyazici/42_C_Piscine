/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyazici <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:04:59 by akyazici          #+#    #+#             */
/*   Updated: 2022/09/10 17:35:43 by akyazici         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	isaret;

	isaret = 1;
	nb = 0;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			isaret *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	return (nb * isaret);
}
/*
int main()
{
	char a[] = "  	---+--+1234ab567";
	printf("%d",ft_atoi(a));
}
*/				
