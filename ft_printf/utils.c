/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:34:48 by jlemieux          #+#    #+#             */
/*   Updated: 2023/02/16 15:39:33 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	parse_format(const char *str)
{
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			return ((char)*str);
		}
		str++;
	}
	return ('s');
}

// c s p d i u x X %
void	print_factory(va_list toprint, char flag)
{
	if (flag == 'c')
		return (ft_putchar_fd(va_arg(toprint, char), 1));
	if (flag == 's')
		return (ft_putstr_fd(va_arg(toprint, char *), 1));
	if (flag == 'p')
	{
		return (ft_putstr_fd(va_arg(, char *), 1));
	}
}
