/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:57:31 by iabasala          #+#    #+#             */
/*   Updated: 2023/12/26 23:32:40 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_putchar(int c)
{
	write(1, &c, 1);
}

void	_print(int i, int j, int k)
{
	_putchar(i + '0');
	_putchar(j + '0');
	_putchar(k + '0');
}

void	_sep(int i, int j, int k)
{
	if (i != 7 || j != 8 || k != 9)
	{
		_putchar(',');
		_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				_print(i, j, k);
				_sep(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
	_putchar('\n');
}
