/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:54:43 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/20 09:49:18 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// and returns 1 if successful
// Write the character 'c' to the console
// Return the number of characters printed
// 
#include "ft_printf.h"

int	ft_print_hex(unsigned long p, char *hex)
{
	int	len;

	len = 0;
	if (p == 0)
		return (ft_printchar('0'));
	if (p > 15)
	{
		len += ft_print_hex(p / 16, hex);
		len += ft_print_hex(p % 16, hex);
	}
	else
		len += ft_print_hex(hex[p % 16], hex);
	return (len);
}
