/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 08:06:05 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/21 10:48:57 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_all(int arr[][6])
{
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			write(1, &"01234"[arr[i][j]], 1);
			if (j != 4)
				write(1, " ", 1);
		j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
