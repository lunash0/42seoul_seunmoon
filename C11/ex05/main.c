/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:56:35 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/02 21:45:14 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cal.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_opera(char *av, char *op)
{
	if (ft_strlen(av) > 1)
		return (0);
	*op = av[0];
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
		return (0);
	return (1);
}

void	num_cal(int n1, int n2, char op)
{
	int		(*cal[5])(int, int);

	cal[0] = plus;
	cal[1] = minus;
	cal[2] = mul;
	cal[3] = div;
	cal[4] = mod;
	if (op == '+')
		ft_putnbr(cal[0](n1, n2));
	else if (op == '-')
		ft_putnbr(cal[1](n1, n2));
	else if (op == '*')
		ft_putnbr(cal[2](n1, n2));
	else if (op == '/' && n2 == 0)
		write(1, "Stop : division by zero", 23);
	else if (op == '/' && n2 != 0)
		ft_putnbr(cal[3](n1, n2));
	else if (op == '%' && n2 == 0)
		write(1, "Stop : modulo by zero", 21);
	else if (op == '%' && n2 != 0)
		ft_putnbr(cal[4](n1, n2));
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	char	op;

	if (ac == 4)
	{
		if (!is_opera(av[2], &op))
			return (0);
		num_cal(ft_atoi(av[1]), ft_atoi(av[3]), op);
	}
	return (0);
}
