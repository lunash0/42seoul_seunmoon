/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 01:23:31 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/26 18:06:17 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

void	rec(int nb, char *base)
{
	long	rmd;
	long	len;
	long	num;

	num = (long)nb;
	len = ft_strlen(base);
	if (num == 0)
		return ;
	rmd = num % len;
	num /= len;
	rec(num, base);
	write(1, &base[rmd], 1);
}

int	same_word(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len - 1)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	len;

	len = ft_strlen(base);
	if (*base == 0 || ft_strlen(base) == 1 || same_word(base))
		return ;
	i = 0;
	while (i < len)
	{
		if (base[i] == '-' || base[i] == '+')
			return ;
		i++;
	}
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		rec(nbr * (-1), base);
	}
	else
		rec(nbr, base);
}
