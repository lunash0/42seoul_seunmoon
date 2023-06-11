/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:26:07 by jinhole2          #+#    #+#             */
/*   Updated: 2023/02/14 12:02:22 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	long long int	result;
	int				i;

	result = 0;
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
			return (-1);
		result *= 10;
		result += str[i] - '0';
		if (result > 2147483647)
			return (-1);
		i++;
	}
	return (result);
}

int	main(int ac, char *av[])
{
	int	x;
	int	y;

	if (ac != 3)
		return (0);
	x = ft_atoi(av[ac - 2]);
	y = ft_atoi(av[ac - 1]);
	if (x <= 0 || y <= 0)
		return (0);
	rush(x, y);
}
