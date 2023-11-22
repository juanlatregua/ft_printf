/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:44:50 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/22 16:17:16 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsig_nbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_print_unsig_nbr(n / 10);
	}
	len += ft_printchar(n % 10 + 48);
	return (len);
}
