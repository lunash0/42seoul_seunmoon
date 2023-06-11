/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 05:22:17 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/02 12:15:52 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *arr)
{
	int	len;

	len = 0;
	while (arr[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*dest;
	char	*temp;

	i = 0;
	src_len = 0;
	while (src[i++])
		src_len++;
	dest = malloc(sizeof(char) * (src_len + 1));
	temp = dest;
	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (temp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr;

	i = 0;
	ptr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		if (ptr[i].copy == NULL)
			return (NULL);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}
