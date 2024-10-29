/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:02:31 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/01 13:31:51 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char	test1[] = "aandadqwwkndlqndlk";
	char	test2[] = "akdasnsad1";
	char	test3[] = "";

	printf("%d", ft_str_is_lower_case(test1));
	printf("%d", ft_str_is_lower_case(test2));
	printf("%d", ft_str_is_lower_case(test3));
	return (0);
}
*/
