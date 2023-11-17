/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:30:33 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/17 20:07:45 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	unsigned int	len;

	len = 0;
	if (n == -2147483648)
	{
		ft_printstr("-2147483648");
		return (11);
	}
	else if (n < 0)
	{
		len += ft_printchar('-');
		len += ft_printnbr(-n);
	}
	else if (n > 9)
	{
		len += ft_printnbr(n / 10);
		len += ft_printnbr(n % 10);
	}
	else
		len += ft_printchar(n + 48);
	return (len);
}
