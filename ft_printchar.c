/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:56:09 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/27 10:13:56 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// añadimos excepcion de %c y de tabulacion
#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}
