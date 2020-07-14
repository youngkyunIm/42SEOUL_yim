/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yim <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:23:41 by yim               #+#    #+#             */
/*   Updated: 2020/07/13 17:21:03 by yim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<math.h>

void print(int j,int nb)
{
	int m;
	char mm;
	while(j>=0)
	{
		if(nb<10)
		{
			mm=nb%10+48;
			write(1,&mm,1);
			return;
		}
		m = nb/pow(10,j);
		mm = m+48;
		write(1,&mm,1);
		nb=nb-m*pow(10,j);
		j--;
	}
}

void ft_putnbr(int nb)
{
	char ma='-';
	char zero='0';
	int a,mb;
	a=-1;
	if(nb==0)
	{
		write(1,&zero,1);
		return;
	}
	else if (nb<0)
	{
		write(1,&ma,1);
		nb = -nb;
	}
	mb=nb;
	while(mb>0)
	{
		a++;
		mb/=10;
	}
	print(a,nb);
}
