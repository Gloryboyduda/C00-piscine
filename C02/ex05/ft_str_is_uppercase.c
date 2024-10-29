/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:23:58 by duandrad          #+#    #+#             */
/*   Updated: 2024/09/29 19:33:16 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	test1[] = "ASDAMDAKSMFEWFO";
	char	test2[] = "ADMKASDALMDasdasd";
	char	test3[] = "";

	printf("%d", ft_str_is_uppercase(test1));
	printf("%d", ft_str_is_uppercase(test2));
	printf("%d", ft_str_is_uppercase(test3));
	return (0);
}
*/
