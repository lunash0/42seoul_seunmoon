/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:22:30 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/27 13:44:33 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		num *= nb;
		i++;
	}
	return (num);
}
