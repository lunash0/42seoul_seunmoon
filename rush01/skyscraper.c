/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 08:06:34 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/20 23:51:28 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_all(int arr[][6]);
int		ft_available(int row, int col, int arr[][6]);
int		is_real_num(char *argv, int arr[][6]);

void	skyscraper(int d, char *argv, int arr[][6], int *flag)
{
	int	num;

	num = 1;
	if (*flag == 1)
		return ;
	if (d == 16)
	{
		if (is_real_num(argv, arr))
		{
			print_all(arr);
			*flag = 1;
		}
		return ;
	}
	while (num <= 4)
	{
		arr[d / 4 + 1][d % 4 + 1] = num;
		if (ft_available(d / 4 + 1, d % 4 + 1, arr))
			skyscraper(d + 1, argv, arr, flag);
		arr[d / 4 + 1][d % 4 + 1] = 0;
		num++;
	}
}
