/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yim <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:23:24 by yim               #+#    #+#             */
/*   Updated: 2020/07/13 17:23:22 by yim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void print(int a)
{
	char q = a/10 + 48;
	char w = a%10 + 48;
	write(1,&q,1);
	write(1,&w,1);
}

void ft_print_comb2(void)
{
	
	int i=0;
	int j=0;
	char t = 48 + 8;
	while(i<=98)
	{
		j=i+1;
		while(j<=99)
		{
			print(i);
			write(1," ",1);
			print(j);
			if (i==98 && j==99)
				return;
			write(1,", ",2);
			j++;
		}
		i++;
	}
}