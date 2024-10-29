/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowcase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:08:35 by duandrad          #+#    #+#             */
/*   Updated: 2024/09/30 18:21:04 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	test1[] = "ABCDEFGH";
	char	test2[] = "aBcDeFgH";
	char	test3[] = "abcdefgH";

	printf("%s\n", ft_strlowcase(test1));
	printf("%s\n", ft_strlowcase(test2));
	printf("%s\n", ft_strlowcase(test3));
	return 0;
}
*/
