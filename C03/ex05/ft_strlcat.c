/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:44:43 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/22 13:48:00 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(dest) > size)
		return (ft_strlen(src) + size);
	i = 0;
	j = 0;
	while (i + 1 < size)
		return (ft_strlen(src) + ft_strlen(dest));
	else if (size > i)
	{
		while (j + 1 < size)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}
