/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_funcs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:36:50 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/12 15:42:22 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	len;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[len])
	{
		ft_printchar(str[len]);
		i++;
	}
	return (len);
}

int	ft_printnbr(int nb)
{
	unsigned int	len;

	len = 0;
	if (nb == -2147483648)
	{
		ft_printstr("-2147483648");
		return (11);
	}
	else if (nb < 0)
	{
		ft_printchar('-');
		n = -nb;
		len++;
	}
	if (n > 9)
	{
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
	else
		ft_printhar(n + '0');
	return (len);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
