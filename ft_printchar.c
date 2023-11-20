/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:56:09 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/20 12:17:31 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// añadimos excepcion de %c y de tabulacion
#include "ft_printf.h"

int	ft_printchar(int c)
{
	if (c == '\t')
	{
		write(1, "\t", 1);
		return (1);
	}
	else
	{
		write(1, &c, 1);
		return (1);
	}
}
