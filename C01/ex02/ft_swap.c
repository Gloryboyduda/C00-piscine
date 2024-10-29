/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:34 by duandrad          #+#    #+#             */
/*   Updated: 2024/09/25 18:49:45 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	d;

	d = *a;
	*a = *b;
	*b = d;
}
/*
int	main()
{
	int x = 42;
	int y = 56;
	
	printf("valor de x e y e:%d,%d\n", x, y);
	ft_swap(&x, &y);
	printf("valor invertido e:%d,%d\n", x,	y);
	return 0;
}
*/
