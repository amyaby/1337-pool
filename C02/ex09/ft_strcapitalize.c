/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:15:34 by iabasala          #+#    #+#             */
/*   Updated: 2024/01/21 20:16:25 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] = str[i] + 32;
			if (i == 0 || (!is_alphanumeric(str[i - 1])))
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
