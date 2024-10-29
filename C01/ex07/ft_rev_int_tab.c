/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:54:55 by duandrad          #+#    #+#             */
/*   Updated: 2024/09/30 12:23:41 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	arr[] = {0, 1, 2, 3, 4};
	int	size = 5;
	int	i = 0;

	ft_rev_int_tab(arr, size);
	for(int i = 0;i < size; i++)
	{	
	printf("%d", arr[i]);
	}
	return 0;
}
*/
