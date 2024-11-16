/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:32:26 by paphetpr          #+#    #+#             */
/*   Updated: 2024/11/16 09:56:22 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (type == 's')
		count += ft_print_string(va_arg(args, char *));
	else if (type == 'p')
		count += ft_print_pointer(va_arg(args, unsigned long), 'a' - 10);
	else if (type == 'd' || type == 'i')
		count += ft_print_int(va_arg(args, int));
	else if (type == 'u')
		count += ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (type == 'x')
		count += ft_print_hexidecimal(va_arg(args, unsigned int), 'a' - 10);
	else if (type == 'X')
		count += ft_print_hexidecimal(va_arg(args, unsigned int), 'A' - 10);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == '%')
				count += ft_print_char('%');
			else
				count += check_type(*format, args);
		}
		else
		{
			count += ft_print_char(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
