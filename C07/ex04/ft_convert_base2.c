/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:40:34 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/02 05:09:01 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

char	*rec(long long nb, char *base_to, char *result_arr)
{
	long long	base_to_len;
	long long	arr_len;
	long long	temp;
	long long	i;

	temp = nb;
	base_to_len = ft_strlen(base_to);
	arr_len = 0;
	while (temp != 0)
	{
		temp /= base_to_len;
		arr_len++;
	}
	if (nb == 0)
		arr_len++;
	i = 0;
	while (i < arr_len)
	{
		result_arr[i] = base_to[nb % base_to_len];
		nb /= base_to_len;
		i++;
	}
	return (result_arr);
}

char	*result_malloc(int nbr, char *base_to)
{
	int		base_len;
	int		result_len;
	char	*result_arr;
	int		temp;

	base_len = ft_strlen(base_to);
	result_len = 0;
	temp = nbr;
	while (temp != 0)
	{
		temp /= base_len;
		result_len++;
	}
	if (nbr <= 0)
		result_len++;
	result_arr = malloc(sizeof(char) * (result_len + 1));
	result_arr[result_len] = '\0';
	return (result_arr);
}

char	*arr_reverse(char *result_arr)
{
	int		arr_len;
	int		i;
	char	temp;

	arr_len = 0;
	while (result_arr[arr_len])
		arr_len++;
	i = 0;
	while (i < (arr_len / 2))
	{
		temp = result_arr[i];
		result_arr[i] = result_arr[arr_len - 1 - i];
		result_arr[arr_len - 1 - i] = temp;
		i++;
	}
	return (result_arr);
}

char	*ft_putnbr_base(int nbr, char *base_to, char *result)
{
	int		i;
	char	*result_arr;
	int		temp;

	temp = 0;
	if (nbr < 0)
	{
		result_arr = rec(-nbr, base_to, result);
		while (result_arr[temp])
			temp++;
		result_arr[temp] = '-';
	}
	else
		result_arr = rec(nbr, base_to, result);
	arr_reverse(result_arr);
	i = 0;
	while (result_arr[i])
		i++;
	result_arr[i] = '\0';
	return (result_arr);
}
