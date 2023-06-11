/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:46:27 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/27 00:11:03 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
