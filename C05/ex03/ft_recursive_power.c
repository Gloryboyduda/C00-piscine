/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:47:13 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/06 17:09:32 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power < 1)
	{
		return (1);
	}
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
int main()
{
	printf("%d",ft_recursive_power(0, 0));
}
*/