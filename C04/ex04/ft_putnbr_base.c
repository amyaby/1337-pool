/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:13:42 by iabasala          #+#    #+#             */
/*   Updated: 2024/01/21 21:30:19 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_putchar(int k)
{
	write(1, &k, 1);
}

int	_lengof(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	test_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (_lengof(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	lengbase;

	lengbase = _lengof(base);
	if (test_base(base))
	{
		if (nbr < 0)
		{
			_putchar('-');
			nbr = -nbr;
		}
		if (nbr < lengbase)
			_putchar(base[nbr % lengbase]);
		else
		{
			ft_putnbr_base(nbr / _lengof(base), base);
			ft_putnbr_base(nbr % _lengof(base), base);
		}
	}
}
