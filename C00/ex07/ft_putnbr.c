/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yim <yim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 22:35:09 by yim               #+#    #+#             */
/*   Updated: 2020/07/21 20:55:53 by yim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	square(int *n)
{
	int out;

	out = *n;
	(*n) = 10;
	if (out == 1)
		(*n) = 10;
	while (1 < out)
	{
		(*n) *= 10;
		out--;
	}
}

void	print(int c, int nb, int ex)
{
	int		m;
	int		n;
	char	mm;

	while (c >= 0)
	{
		n = c;
		if (nb < 10)
		{
			if (ex == 1)
				nb++;
			mm = nb % 10 + 48;
			write(1, &mm, 1);
			return ;
		}
		square(&n);
		m = nb / n;
		mm = m + 48;
		write(1, &mm, 1);
		nb = nb - m * n;
		c--;
	}
}

void	pass(int nb)
{
	int		c;
	int		n;
	int		ex;

	ex = 0;
	c = -1;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			nb = -2147483647;
			ex = 1;
		}
		nb = -nb;
	}
	n = nb;
	while (n > 0)
	{
		c++;
		n /= 10;
	}
	print(c, nb, ex);
}

void	ft_putnbr(int nb)
{
	char	minus;
	char	zero;

	minus = '-';
	zero = '0';
	if (nb == 0)
	{
		write(1, &zero, 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, &minus, 1);
	}
	pass(nb);
}
