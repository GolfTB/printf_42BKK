/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:04:16 by paphetpr          #+#    #+#             */
/*   Updated: 2024/11/16 09:56:22 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *input, ...);

int	ft_print_pointer(unsigned long value, int asc);

int	ft_print_unsigned_int(unsigned int nb);

int	ft_print_string(char *s);

int	ft_print_int(int n);

int	ft_print_char(char c);

int	ft_print_hexidecimal(unsigned int value, int asc);

#endif
