/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_real_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 08:02:16 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/19 22:18:29 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_real_num1(char split, int i, int arr[][6]);
int		is_real_num2(char split, int i, int arr[][6]);
int		is_real_num3(char split, int i, int arr[][6]);
int		is_real_num4(char split, int i, int arr[][6]);
char	*ft_split(char *argv, char split[]);

int	real_updown(char *argv, int arr[][6])
{
	int		i;
	char	split[17];

	i = 0;
	ft_split(argv, split);
	while (i <= 3)
	{
		if (!is_real_num1(split[i], i, arr))
			return (0);
		i++;
	}
	while (i <= 7)
	{
		if (!is_real_num2(split[i], i, arr))
			return (0);
		i++;
	}
	return (1);
}

int	real_side(char *argv, int arr[][6])
{
	int		i;
	char	split[17];

	i = 8;
	ft_split(argv, split);
	while (i <= 11)
	{
		if (!is_real_num3(split[i], i, arr))
			return (0);
		i++;
	}
	while (i <= 15)
	{
		if (!is_real_num4(split[i], i, arr))
			return (0);
		i++;
	}
	return (1);
}

int	is_real_num(char *argv, int arr[][6])
{
	if (!real_updown(argv, arr) || !real_side(argv, arr))
		return (0);
	return (1);
}
