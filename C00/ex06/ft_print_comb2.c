/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yim <yim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 22:33:05 by yim               #+#    #+#             */
/*   Updated: 2020/07/16 15:51:34 by yim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a)
{
	char q;
	char w;

	q = a / 10 + 48;
	w = a % 10 + 48;
	write(1, &q, 1);
	write(1, &w, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print(i);
			write(1, " ", 1);
			print(j);
			if (i == 98 && j == 99)
				return ;
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
