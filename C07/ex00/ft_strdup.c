/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:41:45 by iabasala          #+#    #+#             */
/*   Updated: 2024/01/21 23:02:54 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

char	*ft_strdup(char *src)
{
	int		l;
	char	*tocopy;

	l = 0;
	if (src == NULL)
		return (NULL);
	tocopy = malloc(sizeof(char) * (_strlen(src) + 1));
	if (tocopy == NULL)
		return (NULL);
	while (src[l])
	{
		tocopy[l] = src[l];
		l++;
	}
	tocopy[l] = '\0';
	return (tocopy);
}
