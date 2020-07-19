/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yim <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 20:22:10 by yim               #+#    #+#             */
/*   Updated: 2020/07/14 21:12:44 by yim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include<unistd.h>

void combi(int size, int n, int c)
{
	int i=0;
	if(n==1)
	{
	printf("----1----\n");
		while(i<c)
		{
			write(1,&cparr[i],1);
		}
			write(1,',',1);
			write(1,' ',1);
		return;
	}
	//return;
}

void ft_print_combn(int n)
{
	char a[10];
	
	arr = (char*)malloc(size*sizeof(int));
	cparr = (char*)malloc(size*sizeof(int));
	while(i<=size)
	{
		arr[i]=i+48;
		i++;
	}
	combi(size,n,c);
	free(arr);
	free(cparr);
	return;
}
