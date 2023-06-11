/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_available.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:47:49 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/19 22:53:28 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_available(int row, int col, int arr[][6])
{
	int	i;

	i = 1;
	while (row - i > 0)
	{
		if (arr[i][col] == arr[row][col])
			return (0);
	i++;
	}
	i = 1;
	while (col - i > 0)
	{
		if (arr[row][i] == arr[row][col])
			return (0);
		i++;
	}
	return (1);
}
