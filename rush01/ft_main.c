/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 08:08:30 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/20 00:10:10 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	skyscraper(int d, char *argv, int arr[][6], int *flag);

int	ft_strlen(char *input)
{
	int	len;

	len = 0;
	while (input[len])
		len++;
	return (len);
}

int	ft_argv_check(char *arr)
{
	int	i;

	i = 0;
	while (i <= 30)
	{
		if (arr[i] < '1' || arr[i] > '4')
			return (0);
		i += 2;
	}
	i = 1;
	while (i <= 29)
	{
		if (arr[i] != ' ')
			return (0);
		i += 2;
	}
	return (1);
}

int	is_error(char input[])
{
	if (ft_strlen(input) != 31)
		return (1);
	if (ft_argv_check(input) == 0)
		return (1);
	return (0);
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;
	int	arr[6][6];
	int	flag;

	if (ac != 2 || is_error(av[1]) == 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j++ < 6)
			arr[i][j] = 0;
		i++;
	}
	flag = 0;
	skyscraper(0, av[1], arr, &flag);
	if (flag == 0)
		write(2, "Error\n", 6);
	return (0);
}
