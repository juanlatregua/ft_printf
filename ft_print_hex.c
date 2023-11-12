/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:54:43 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/12 15:50:33 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// and returns 1 if successful
// Write the character 'c' to the console
// Return the number of characters printed
// 
#include "ft_printf.h"

int	ft_hexlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

void	ft_print_hex(unsigned int n, char c)
{
	if (n > 15)
	{
		ft_print_hex(n / 16, c);
		ft_print_hex(n % 16, c);
	}
	else
	{
		if (n < 10)
			ft_printchar(n + '0');
		else if (c == 'x')
			ft_printchar(n + 87);
		else if (c == 'X')
			ft_printchar(n + 55);
	}
}

int	ft_print_hex(unsigned int n, char c)
{
	if (n == 0)
		return (ft_printchar('0'));
	else
		ft_printhex(n, c);
	return (ft_hexlen(n));
}
