/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:51:51 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/01 11:35:01 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		as;
	int		ds;

	i = 0;
	as = 0;
	ds = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			as++;
		else if ((*f)(tab[i], tab[i + 1]) <= 0)
			ds++;
		i++;
	}
	if (as == i || ds == i)
		return (1);
	return (0);
}
