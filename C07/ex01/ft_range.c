/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:12:00 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/02 04:52:53 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	arr_len;
	int	i;

	if (min >= max)
		return (0);
	else
	{
		arr_len = max - min;
		arr = malloc(sizeof(int) * (arr_len));
		i = 0;
		while (i < arr_len)
		{
			arr[i] = min + i;
			i++;
		}
	}
	return (arr);
}
