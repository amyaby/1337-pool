/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:03:40 by iabasala          #+#    #+#             */
/*   Updated: 2024/01/21 22:14:50 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	while (j < argc)
	{
		write(1, argv[argc - 1], len(argv[argc - 1]));
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
