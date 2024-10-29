/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:21:43 by duandrad          #+#    #+#             */
/*   Updated: 2024/09/25 13:58:17 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	digits(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (!(c == '7' && d == '8' && u == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)

{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c +1;
		while (d <= '8')
		{
			u = d +1;
			while (u <= '9')
			{
				digits(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
