/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:16:19 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/28 01:39:55 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1) || (*s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}	
	return (0);
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				av[0] = av[i];
				av[i] = av[j];
				av[j] = av[0];
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
	return (0);
}
