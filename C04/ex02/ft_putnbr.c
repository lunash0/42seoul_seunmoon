/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:47:21 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/25 22:57:08 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(int n)
{
	char	num;

	if (n == 0)
		return ;
	num = n % 10 + '0';
	n /= 10;
	rec(n);
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		rec(nb * -1);
	}
	else
		rec(nb);
}
