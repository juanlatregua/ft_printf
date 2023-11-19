/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:49:26 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/19 19:03:20 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//va_list args: Lista de argumentos. 
//char const format: Formato a imprimir.
//la funcion format es un char que contiene el formato a imprimir.
//manejamos los formatos c, s, p, d, i, u, x, X, %.
//- c: imprime un caracter.
//- s: imprime una cadena de caracteres.
//- p: imprime un puntero.
//- d, i: imprime un entero.
//- u: imprime un entero sin signo.
//- x: imprime un entero en hexadecimal. ejem: 0x1a3b4c5d.
//- X: imprime un entero en hexadecimal. ejem: 0x1A3B4C5D.
//- %: imprime un porcentaje. 
//la funcion ft_formats recibe dos parametros, una lista de argumentos, es decir,
// los argumentos que se van a imprimir por ejemplo, si se va a imprimir un entero.
// la variable va_list se usa para recorrer la lista de argumentos. Cada argumento
// se recorre con la funcion va_arg, que recibe dos parametros, la lista de argumentos
// y un char que contiene el formato a imprimir.
// la funcion ft_formats devuelve un entero, que es el numero de caracteres que se imprimieron.
#include "ft_printf.h"

int	ft_formats(va_list	args, char const	format)
{
	int		len;
	char	*hex_lower;
	char	*hex_upper;

	len = 0;
	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	// el primer if es para imprimir un caracter, se llama a la funcion ft_printchar
	// y se le pasa como argumento el argumento que se va a imprimir, que se obtiene
	// con la funcion va_arg y se le pasa la lista de argumentos y el formato a imprimir, que es un char.
	// pero va_arg devuelve un int, por lo que se debe castear a char con va_arg(args, int).
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));

	// el segundo if es para imprimir una cadena de caracteres, se llama a la funcion ft_printstr
	// y se le pasa como argumento el argumento que se va a imprimir, que se obtiene con la funcion va_arg
	// y se le pasa la lista de argumentos y el formato a imprimir, que es un puntero a char.
	// pero va_arg devuelve un puntero a void, por lo que se debe castear a char con va_arg(args, char *).
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	// el tercer if es para imprimir un puntero, se llama a la funcion ft_printstr
	// y se le pasa como argumento el argumento que se va a imprimir, que se obtiene con la funcion va_arg
	// y se le pasa la lista de argumentos y el formato a imprimir, que es un puntero a void.
	// pero va_arg devuelve un puntero a void, por lo que se debe 
	// castear a unsigned long con va_arg(args, unsigned long). el primer len es para imprimir 0x.
	// tiene que ser unsigned long porque el puntero es de 8 bytes, y el int es de 4 bytes, se castea
	// a unsigned long porque es el tipo de dato que tiene mas bytes, con la funcion ft_print_hex
	// se imprime el puntero en hexadecimal.
	// el segundo len es para imprimir el puntero.
	else if (format == 'p')
	{
		len += ft_printstr("0x");
		len += ft_print_hex(va_arg(args, unsigned long), hex_lower);
	}
	// el cuarto if es para imprimir un entero, se llama a la funcion ft_printnbr
	// y se le pasa como argumento el argumento que se va a imprimir, que se obtiene con la funcion va_arg
	// y se le pasa la lista de argumentos y el formato a imprimir, que es un int.
	// pero va_arg devuelve un int, por lo que se debe castear a int con va_arg(args, int).
	// el quinto if es para imprimir un entero sin signo, se llama a la funcion ft_print_unsig_nbr
	// y se le pasa como argumento el argumento que se va a imprimir, que se obtiene con la funcion va_arg
	// y se le pasa la lista de argumentos y el formato a imprimir, que es un unsigned int.
	// pero va_arg devuelve un unsigned int, por lo que se debe castear a unsigned int con va_arg(args, unsigned int).
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	// el quintoi if es para imprimir un entero sin signo, se llama a la funcion ft_print_unsig_nbr
	// y se le pasa como argumento el argumento que se va a imprimir, que se obtiene con la funcion va_arg
	// y se le pasa la lista de argumentos y el formato a imprimir, que es un unsigned int.
	// pero va_arg devuelve un unsigned int, por lo que se debe castear a unsigned int con va_arg(args, unsigned int).
	
	else if (format == 'u')
		len += ft_print_unsig_nbr(va_arg(args, unsigned int));
	// el sexto if es para imprimir un entero en hexadecimal, se llama a la funcion ft_print_hex
	// y se le pasa como argumento el argumento que se va a imprimir, que se obtiene con la funcion va_arg
	// y se le pasa la lista de argumentos y el formato a imprimir, que es un unsigned int.
	// pero va_arg devuelve un unsigned int, por lo que se debe castear a unsigned int con va_arg(args, unsigned int).
	// el segundo parametro de la funcion ft_print_hex es un char que contiene los caracteres que se van a imprimir
	// en hexadecimal, en este caso es "0123456789abcdef".
	else if (format == 'x')
		len += ft_print_hex(va_arg(args, unsigned int), hex_lower);
	// el septimo if es para imprimir un entero en hexadecimal, se llama a la funcion ft_print_hex
	// y se le pasa como argumento el argumento que se va a imprimir, que se obtiene con la funcion va_arg
	// y se le pasa la lista de argumentos y el formato a imprimir, que es un unsigned long.
	// pero va_arg devuelve un unsigned long, por lo que se debe castear a unsigned long con va_arg(args, unsigned long).
	// el segundo parametro de la funcion ft_print_hex es un char que contiene los caracteres que se van a imprimir
	// en hexadecimal, en este caso es hex_upper.
	else if (format == 'X')
		len += ft_print_hex(va_arg(args, unsigned long), hex_upper);
	// el octavo if es para imprimir un porcentaje, se llama a la funcion ft_printchar
	// y se le pasa como argumento el argumento que se va a imprimir, que se obtiene con la funcion va_arg
	// y se le pasa la lista de argumentos y el formato a imprimir, que es un char.
	// pero va_arg devuelve un int, por lo que se debe castear a char con va_arg(args, int).
	else if (format == '%')
		len += ft_printchar('%');
	return (len);
}
// la funcion ft_printf recibe dos parametros, una cadena de caracteres que contiene el formato a imprimir
// y una lista de argumentos, es decir, los argumentos que se van a imprimir por ejemplo, si se va a imprimir un entero.
// la variable va_list se usa para recorrer la lista de argumentos. Cada argumento
// se recorre con la funcion va_arg, que recibe dos parametros, la lista de argumentos
// y un char que contiene el formato a imprimir.
// la funcion ft_printf devuelve un entero, que es el numero de caracteres que se imprimieron.

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_formats(args, str[i]);
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
