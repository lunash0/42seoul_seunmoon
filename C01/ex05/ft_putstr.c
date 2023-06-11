/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:31:52 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/16 21:51:28 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "abcde";
	char	str2[] = "123a";

	ft_putstr(str1);
	printf("\n");
	ft_putstr(str2);
	return (0);
}
