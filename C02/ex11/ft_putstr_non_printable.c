/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:33:52 by iabasala          #+#    #+#             */
/*   Updated: 2024/01/21 20:45:24 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char k)
{
	write(1, &k, 1);
}

void	conv_hex(char c)
{
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	write(1, "\\", 1);
	ft_putchar(hexa_base[c / 16]);
	ft_putchar(hexa_base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			conv_hex(str[i]);
		i++;
	}
}
