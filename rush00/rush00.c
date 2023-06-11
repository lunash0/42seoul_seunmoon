/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:53 by jinhole2          #+#    #+#             */
/*   Updated: 2023/02/12 21:51:09 by hyeonmju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_abbc(int i)
{
	char	a;
	char	b;
	int		k;

	a = 'o';
	b = '-';
	k = 1;
	if (i == 1)
	{
		ft_putchar(a);
		return ;
	}
	ft_putchar(a);
	while (k <= i - 2)
	{
		ft_putchar(b);
		k++;
	}
	ft_putchar(a);
}

void	ft_bbbb(int i)
{
	char	b;
	int		k;

	b = '|';
	k = 1;
	if (i == 1)
	{
		ft_putchar(b);
		return ;
	}
	ft_putchar(b);
	while (k <= i - 2)
	{
		ft_putchar(' ');
		k++;
	}
	ft_putchar(b);
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			ft_abbc(x);
		}
		else
			ft_bbbb(x);
		i++;
		write(1, "\n", 1);
	}
}
