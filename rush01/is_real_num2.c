/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_real_num2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 08:04:45 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/19 22:16:30 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_real_num2(char split, int i, int arr[][6])
{
	int	count;
	int	max;
	int	j;

	count = 0;
	max = 0;
	j = 4;
	i -= 4;
	while (j >= 1)
	{
		if (arr[j][i + 1] > max)
		{
			max = arr[j][i + 1];
			count++;
		}
		j--;
	}
	if (count == split - '0')
		return (1);
	return (0);
}
