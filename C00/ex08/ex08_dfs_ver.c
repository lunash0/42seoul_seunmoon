/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08_dfs_ver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:00:59 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/16 16:50:30 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	dfs(char *visit, int n, int level, int start)
{
	int	end;
	int	i;

	end = 10 - n + level;
	i = start;
	while (i <= end)
	{
		visit[level] = i + '0';
		if (level == (n - 1))
		{
			write(1, visit, n);
			if (visit[0] != ((10 - n) + '0'))
				write(1, ", ", 2);
		}
		else
			dfs(visit, n, level + 1, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	visit[10];

	dfs(visit, n, 0, 0);
}

int	main(void)
{
	ft_print_combn(3);
	printf("\n");
	return (0);
}
