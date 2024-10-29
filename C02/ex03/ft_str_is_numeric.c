/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:36:54 by duandrad          #+#    #+#             */
/*   Updated: 2024/09/29 19:01:31 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	test1[] = "1321321312";
	char	test2[] = "123131a";
	char	test3[] = "";

	printf("%d", ft_str_is_numeric(test1));
	printf("%d", ft_str_is_numeric(test2));
	printf("%d", ft_str_is_numeric(test3));
	return (0);
}
*/
