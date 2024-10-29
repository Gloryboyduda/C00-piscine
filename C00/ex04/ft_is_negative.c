/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:04:56 by duandrad          #+#    #+#             */
/*   Updated: 2024/09/24 17:22:11 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
	{
		write(1, "P", 1);
	}
}
/*
int	main(void)

{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative('\0');
	return (0);
}
*/
