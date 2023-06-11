/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_real_num1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 08:04:03 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/19 22:17:01 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_real_num1(char split, int i, int arr[][6])
{
	int	count;
	int	max;
	int	j;

	count = 0;
	max = 0;
	j = 1;
	while (j <= 4)
	{
		if (arr[j][i + 1] > max)
		{
			max = arr[j][i + 1];
			count++;
		}
		j++;
	}
	if (count == split - '0')
		return (1);
	return (0);
}
