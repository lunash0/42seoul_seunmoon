/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 07:30:06 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/03 00:18:33 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result_arr;
	int	i;

	i = 0;
	result_arr = malloc(sizeof(int) * length);
	while (i < length)
	{
		result_arr[i] = f(tab[i]);
		i++;
	}
	return (result_arr);
}

#include <stdio.h>

int	print_element(int a)
{
	int result = a * 10;
	printf("%d\n", result);
	return (result);
}

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("---   EXPECTED  ---\n");
	printf("0\n10\n20\n30\n40\n50\n60\n70\n80\n90\n");
	printf("--- USER OUTPUT ---\n");
	ft_map (tab, 10, print_element);
	printf("--- ----------- ---\n");
	return (0);
}
