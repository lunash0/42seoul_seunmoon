/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:29:47 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/12 20:20:33 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num_arr[3];

	num_arr[0] = '0';
	while (num_arr[0] <= '7')
	{
		num_arr[1] = num_arr[0] + 1;
		while (num_arr[1] <= '8')
		{
			num_arr[2] = num_arr[1] + 1;
			while (num_arr[2] <= '9')
			{
				write(1, num_arr, 3);
				if (num_arr[0] != '7')
				{
					write(1, ", ", 2);
				}
				num_arr[2]++;
			}
			num_arr[1]++;
		}
		num_arr[0]++;
	}
}
