/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:05:31 by duandrad          #+#    #+#             */
/*   Updated: 2024/09/28 18:49:05 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a;
	int b;
	int div;
	int mod;

	printf("digite um numero:\n");
	scanf("%d", &a);
	printf("digite mais um numero:\n");
	scanf("%d", &b);

	if(b != 0)
	{
		ft_div_mod(a, b, &div, &mod);
		printf("o valor da divisao e: %d\n", div);
		printf("o resto da div e: %d\n", mod);
	}
	else
	{
		printf("nao se divide por 0\n");
	}
	return 0;
}
*/
