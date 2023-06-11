/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:47:47 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/12 20:20:50 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	num_print(int num);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			num_print(a);
			write(1, " ", 1);
			num_print(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
	return ;
}

void	num_print(int num)
{
	char	my_num;
	char	quo;
	char	rmd;

	quo = num / 10 + '0';
	rmd = num % 10 + '0';
	write(1, &quo, 1);
	write(1, &rmd, 1);
	return ;
}
