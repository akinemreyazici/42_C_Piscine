/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyazici <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:18:24 by akyazici          #+#    #+#             */
/*   Updated: 2022/09/10 17:32:35 by akyazici         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	errorcheck(char *str)
{
	int	i;
	int	size;
	int	same;

	i = 0;
	size = ft_strlen(str);
	if (str[0] == '\0' || size == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		same = i + 1;
		while (same < ft_strlen(str))
		{
			if (str[i] == str[same])
				return (0);
			same++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		len;
	int		error;

	error = errorcheck(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
/*
int main()
{
	ft_putnbr_base(-14, "01");
	write(1,"\n",1);
	ft_putnbr_base(6, "012345");
	write(1,"\n",1);
	ft_putnbr_base(14, "poneyvif");
	write(1,"\n",1);
	ft_putnbr_base(24, "0123456789abcdef");
}
*/
