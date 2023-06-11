/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunmoon <seunmoon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:56:58 by seunmoon          #+#    #+#             */
/*   Updated: 2023/03/02 14:27:40 by seunmoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAL_H
# define CAL_H

# include <unistd.h>

int		plus(int n1, int n2);
int		minus(int n1, int n2);
int		mul(int n1, int n2);
int		div(int n1, int n2);
int		mod(int n1, int n2);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

#endif
