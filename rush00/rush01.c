/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:50:53 by jinhole2          #+#    #+#             */
/*   Updated: 2023/02/12 12:55:54 by jinhole2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_abbc(int i)
{
	char	a;
	char	c;
	char	b;
	int		k;

	b = '*';
	a = '/';
	c = '\\';
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
	ft_putchar(c);
}

void	ft_bbbb(int i)
{
	char	b;
	int		k;

	b = '*';
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

void	ft_cbba(int i)
{
	char	a;
	char	b;
	char	c;
	int		k;

	a = '/';
	b = '*';
	c = '\\';
	k = 1;
	if (i == 1)
	{
		ft_putchar(c);
		return ;
	}
	ft_putchar(c);
	while (k <= i -2)
	{
		ft_putchar(b);
		k++;
	}
	ft_putchar(a);
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_abbc(x);
		else if (i == y)
			ft_cbba(x);
		else
			ft_bbbb(x);
		i++;
		write(1, "\n", 1);
	}
}
