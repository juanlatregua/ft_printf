/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:44:50 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/20 09:54:27 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsig_nbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_printnbr(n / 10);
		len += ft_printnbr(n % 10);
	}
	else
	{
		len++;
		len += ft_printchar(n + 48);
	}
	return (len);
}
