/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:02:00 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/21 21:22:19 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	now_idx;
	int	find_idx;
	int	i;

	now_idx = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[now_idx])
	{
		find_idx = now_idx;
		while (str[find_idx] == to_find[i] && str[find_idx])
		{
			find_idx++;
			i++;
		}
		if (to_find[i] == '\0')
			return (&str[now_idx]);
		now_idx++;
	}
	return (0);
}
