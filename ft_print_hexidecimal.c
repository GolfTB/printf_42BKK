/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexidecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:58:44 by paphetpr          #+#    #+#             */
/*   Updated: 2024/11/16 10:00:02 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}

static char	*create_string(unsigned int value, int *strlen)
{
	int				i;
	unsigned int	temp;
	char			*str;

	i = 0;
	temp = value;
	if (temp == 0)
		i = 1;
	else
	{
		while (temp != 0)
		{
			temp = temp / 16;
			i++;
		}
	}
	str = calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	*strlen = i;
	return (str);
}

static void	fill_hex_string(unsigned int value, char *str, int asc, int len)
{
	int	i;

	i = len - 1;
	while (value != 0)
	{
		if ((value % 16) < 10)
			str[i] = (value % 16) + '0';
		else
			str[i] = (value % 16) + asc;
		value /= 16;
		i--;
	}
}

int	ft_print_hexidecimal(unsigned int value, int asc)
{
	char	*printout;
	int		strlen;

	printout = create_string(value, &strlen);
	if (!printout)
		return (0);
	if (value == 0)
	{
		write(1, "0", 1);
		free(printout);
		return (1);
	}
	fill_hex_string(value, printout, asc, strlen);
	ft_putstr_fd(printout, 1);
	free(printout);
	return (strlen);
}
