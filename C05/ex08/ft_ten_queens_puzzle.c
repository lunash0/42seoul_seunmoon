/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:20:10 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/27 00:10:32 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(int row, int col, int board[][10])
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[i][col] == 1)
			return (0);
		i++;
	}
	i = 1;
	while (row - i >= 0 && col - i >= 0)
	{
		if (board[row - i][col - i] == 1)
			return (0);
		i++;
	}
	i = 1;
	while (row - i >= 0 && col + i < 10)
	{
		if (board[row - i][col + i] == 1)
			return (0);
		i++;
	}
	return (1);
}

void	print_all(int board[][10])
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (board[i][j] == 1)
			{
				write(1, &"0123456789"[j], 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	ft_dfs(int d, int board[][10])
{
	int	col;
	int	ret;

	ret = 0;
	if (d == 10)
	{
		print_all(board);
		return (1);
	}
	else
	{
		col = 0;
		while (col < 10)
		{
			board[d][col] = 1;
			if (ft_check(d, col, board))
				ret += ft_dfs(d + 1, board);
			board[d][col] = 0;
			col++;
		}
	}
	return (ret);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	j;
	int	board[10][10];
	int	cases;

	i = 0;
	cases = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	j = 0;
	cases = ft_dfs(j, board);
	return (cases);
}
