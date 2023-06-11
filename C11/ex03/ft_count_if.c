/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 07:50:11 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/01 07:53:01 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	not_zero;

	i = 0;
	while (*tab[i] != '\0')
	{
		if (f(tab[i]) != 0)
			not_zero++;
		i++;
	}
	return (not_zero);
}
