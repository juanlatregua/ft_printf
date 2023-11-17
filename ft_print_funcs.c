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

int	ft_printstr(char *str)
{
	int	len;

	len  = 0;
	if (!str)
		return (ft_printstr("(null)"));
	while (str[len] != '\0')
	{
		ft_printchar(str[len]);
		len++;
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
		len += ft_printchar('-');
        len += ft_printnbr(-nb);
	}
	else if (nb > 9)
	{
		len += ft_printnbr(nb / 10);
		len += ft_printnbr(nb % 10);
	}
	else
		len += ft_printchar(nb + '0');
	return (len);
}
