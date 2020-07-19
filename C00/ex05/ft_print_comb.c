/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yim <yim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 21:56:58 by yim               #+#    #+#             */
/*   Updated: 2020/07/16 15:43:52 by yim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i, int j, int k)
{
	char ci;
	char cj;
	char ck;
	char com;
	char space;

	ci = i + 48;
	cj = j + 48;
	ck = k + 48;
	com = ',';
	space = ' ';
	write(1, &ci, 1);
	write(1, &cj, 1);
	write(1, &ck, 1);
	if (i == 7)
		return ;
	write(1, &com, 1);
	write(1, &space, 1);
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
