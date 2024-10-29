/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:36:54 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/07 19:26:31 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ftprint(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	countminus;
	int	number;

	i = 0;
	countminus = 0;
	number = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			countminus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	if ((countminus % 2) == 0)
		return (number);
	else
		return (-number);
}
/*
int	main()
{
	char	test[] = "  ---+--+1234ab567";

	printf("%d", ft_atoi(test));
	return 0;
}
*/