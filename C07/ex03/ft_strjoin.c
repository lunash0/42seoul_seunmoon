/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:40:42 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/02 12:05:09 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_sum_len(int size, char **strs, char *sep)
{
	int	strs_len;
	int	sep_len;
	int	i;

	strs_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	strs_len += sep_len * (size - 1);
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	return (strs_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' )
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sum_len;
	char	*sum;
	int		i;

	if (size == 0)
	{
		sum = malloc(sizeof(char));
		sum[0] = '\0';
		return (sum);
	}
	sum_len = ft_sum_len(size, strs, sep);
	sum = malloc(sizeof(char) * (sum_len + 1));
	sum[0] = '\0';
	i = -1;
	while (++i < (size - 1))
	{
		sum = ft_strcat(sum, strs[i]);
		sum = ft_strcat(sum, sep);
	}
	sum = ft_strcat(sum, strs[i]);
	sum[sum_len] = '\0';
	return (sum);
}
