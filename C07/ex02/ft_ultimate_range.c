/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:35:19 by iabasala          #+#    #+#             */
/*   Updated: 2024/01/21 23:05:56 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	range_int;
	int	i;

	range_int = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * range_int);
	if (array == NULL)
	{
		return (-1);
	}
	while (i < range_int)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (range_int);
}
