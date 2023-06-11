/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:09:02 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:49 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char str_i, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str_i == charset[j])
			return (1);
		j++;
	}
	return (-1);
}

int	words_num(char *str, char *charset)
{
	int	count_words;
	int	i;

	count_words = 0;
	i = 0;
	while (str[i])
	{
		while (is_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
		if ((is_charset(str[i], charset) == -1) && str[i] != '\0')
			count_words++;
		while (is_charset(str[i], charset) == -1 && str[i] != '\0')
			i++;
	}
	return (count_words);
}

void	split_words(char **arr, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;
	int	idx;

	word = 0;
	i = 0;
	if (words_num(str, charset) == 0)
		return ;
	while (word < words_num(str, charset))
	{
		while (is_charset(str[i], charset) == 1)
			i++;
		j = i;
		while (is_charset(str[j], charset) == -1 && str[j] != '\0')
			j++;
		arr[word] = malloc(sizeof(char) * (j - i + 1));
		idx = 0;
		while (i < j)
			arr[word][idx++] = str[i++];
		arr[word][idx] = '\0';
		word++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**result_arr;
	int		words;

	words = words_num(str, charset);
	result_arr = (char **)malloc(sizeof(char *) * (words + 1));
	result_arr[words] = 0;
	split_words(result_arr, str, charset);
	return (result_arr);
}
