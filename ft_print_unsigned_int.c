/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 03:56:20 by paphetpr          #+#    #+#             */
/*   Updated: 2024/11/16 09:56:23 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void	print_unsigned_number(unsigned int nb)
{
	if (nb > 9)
		print_unsigned_number(nb / 10);
	ft_putchar_fd((nb % 10) + '0', 1);
}

int	ft_print_unsigned_int(unsigned int nb)
{
	int	count;

	count = 1;
	print_unsigned_number(nb);
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count);
}
