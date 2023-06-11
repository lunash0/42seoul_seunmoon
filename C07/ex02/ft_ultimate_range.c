/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:45:36 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/01 18:58:55 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_len;
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	else
	{
		range_len = max - min;
		arr = malloc(sizeof(int) * range_len);
		i = 0;
		while (i < range_len)
		{
			arr[i] = min + i;
			i++;
		}
		*range = arr;
	}
	return (range_len);
}
