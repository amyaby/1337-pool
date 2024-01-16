/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:58:04 by iabasala          #+#    #+#             */
/*   Updated: 2023/12/26 23:58:51 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_print(int j, int i)
{
	if (j < i)
	{
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		_putchar(' ');
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
}

void	_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	j;
	int	i;

	j = 0;
	while (j <= 98)
	{
		i = j + 1;
		while (i <= 99)
		{
			_print(j, i);
			if (!(j == 98 && i == 99))
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				break ;
			i++;
		}
		j++;
	}
}
