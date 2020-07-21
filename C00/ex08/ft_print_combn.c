/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yim <yim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 11:41:32 by yim               #+#    #+#             */
/*   Updated: 2020/07/21 20:08:27 by yim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[10];
char	g_copy[10];

void	ft_print_combn(int n);
void	combi(int num, int n, int c);

void	print(int c)
{
	int		i;

	i = 0;
	while (i < c)
	{
		write(1, &g_copy[i], 1);
		i++;
	}
	return ;
}

void	combi(int num, int n, int c)
{
	char	space;
	char	com;

	com = ',';
	space = ' ';
	if (n == 0)
	{
		print(c);
		if (num == 0)
			return ;
		write(1, &com, 1);
		write(1, &space, 1);
		return ;
	}
	if (num < n || num == 0)
	{
		return ;
	}
	else
	{
		g_copy[n - 1] = g_arr[num - 1];
		combi(num - 1, n - 1, c);
		combi(num - 1, n, c);
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		c;
	int		num;

	num = 10;
	c = n;
	i = 0;
	while (i <= num)
	{
		g_arr[i] = i + 48;
		g_copy[i] = 48;
		i++;
	}
	combi(num, n, c);
	return ;
}
