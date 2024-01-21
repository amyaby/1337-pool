/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:46:14 by iabasala          #+#    #+#             */
/*   Updated: 2024/01/21 23:04:34 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	int_range;
	int	i;

	int_range = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * int_range);
	if (array == NULL)
		return (NULL);
	while (i < int_range)
	{
		array[i] = i + min;
		i++;
	}
	return (array);
}
