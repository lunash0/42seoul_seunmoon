/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:45:27 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/13 14:43:11 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_ascending(int num)
{
	int	rmd[9];
	int	i;

	i = 0;
	while (num != 0)
	{
		rmd[i] = num % 10;
		num = num / 10;
		i++;
	}
	i--;
	while (i > 0)
	{
		if (rmd[i - 1] > rmd[i])
			i--;
		else
			return (0);
	}
	return (1);
}

int	power(int n)
{
	int	ten;
	int	i;

	ten = 1;
	i = 1;
	while (i < n)
	{
		ten *= 10;
		i++;
	}
	return (ten);
}

void	rec(int nb)
{
	char	num;

	if ((nb) != 0)
	{
		num = nb % 10 + '0';
		nb /= 10;
		rec(nb);
		write(1, &num, 1);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	max;

	max = power(n);
	i = 0;
	while (i < max * 10)
	{
		if (is_ascending(i) && max / 10 < i)
		{
			if (max > i)
				write(1, "0", 1);
			rec(i);
			if (i / max != 10 - n)
				write(1, ", ", 2);
			else
				return ;
		}
		i++;
	}
}
