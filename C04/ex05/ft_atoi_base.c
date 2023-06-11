/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:26:10 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/26 17:27:05 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	base_validate(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| ((base[i] >= 9 && base[i] <= 13) || base[i] == 32))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (i);
}

int	is_base(char *str, char *base, int i)
{
	int	str_len;
	int	j;

	str_len = ft_strlen(str);
	j = 0;
	while (i < str_len)
	{
		while (base[j])
		{
			if (str[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (-1);
}

// arr[0] => i, arr[1] => j, arr[3] => sign, arr[4] => sum
int	ft_atoi(char *str, char *base, int base_len)
{
	int	arr[4];

	arr[3] = 1;
	arr[0] = 0;
	while ((str[arr[0]] >= 9 && str[arr[0]] <= 13) || str[arr[0]] == 32)
		arr[0]++;
	while (str[arr[0]] == '-' || str[arr[0]] == '+')
	{
		if (str[arr[0]] == '-')
			arr[3] *= -1;
		arr[0]++;
	}
	arr[4] = 0;
	while (*str && is_base(str, base, arr[0]) == 1)
	{
		arr[1] = 0;
		while (base[arr[1]] && str[arr[0]] != base[arr[1]])
			arr[1]++;
		if (arr[1] == base_len)
			return (arr[4]);
		arr[4] = arr[4] * base_len + arr[3] * arr[1];
		arr[0]++;
	}
	return (arr[4]);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	base_len;

	i = 0;
	sign = 1;
	base_len = base_validate(base);
	if (base_len == 0)
		return (0);
	return (ft_atoi(str, base, base_len));
}

#include <stdio.h>
int main()
{
  printf("%d", ft_atoi_base("ff", "0123456789abcdef"));
}
