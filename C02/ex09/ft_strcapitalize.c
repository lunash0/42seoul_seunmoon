/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 02:16:11 by seunmoon          #+#    #+#             */
/*   Updated: 2023/02/20 17:23:40 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_word(char ch)
{
	if ((ch >= '0' && ch <= '9')
		|| (ch >= 'A' && ch <= 'Z')
		|| (ch >= 'a' && ch <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (is_word(str[i - 1]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		i++;
	}
	return (str);
}
