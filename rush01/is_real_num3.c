/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_real_num3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 08:05:37 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/19 22:15:59 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_real_num3(char split, int i, int arr[][6])
{
	int	count;
	int	max;
	int	j;

	count = 0;
	max = 0;
	j = 1;
	i -= 8;
	while (j <= 4)
	{
		if (arr[i + 1][j] > max)
		{
			max = arr[i + 1][j];
			count++;
		}
		j++;
	}
	if (count == split - '0')
		return (1);
	return (0);
}
