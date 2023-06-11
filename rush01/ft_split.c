/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 07:58:19 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/19 22:09:52 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_split(char *argv, char *can_see)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[j])
	{
		if (argv[j] >= '1' && argv[j] <= '4')
		{
			can_see[i] = argv[j];
			i++;
			j++;
		}
		else
			j++;
	}
	return (can_see);
}
