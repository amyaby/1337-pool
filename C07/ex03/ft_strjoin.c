/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:29:10 by iabasala          #+#    #+#             */
/*   Updated: 2024/01/21 23:06:50 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	whole_len;
	int	i;

	whole_len = 0;
	i = 0;
	while (i < size)
	{
		whole_len += ft_strlen(strs[i]);
		if (i < size - 1)
			whole_len += ft_strlen(sep);
		i++;
	}
	return (whole_len);
}

char	*handel_zero(void)
{
	char	*ptr;

	ptr = malloc(1);
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		whole_len;
	int		i;
	char	*result;
	char	*ptr;

	i = 0;
	if (size == 0)
		return (handel_zero());
	whole_len = calculate_total_length(size, strs, sep);
	result = malloc(whole_len + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
