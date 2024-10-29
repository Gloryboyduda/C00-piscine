/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:48:53 by duandrad          #+#    #+#             */
/*   Updated: 2024/09/30 18:07:57 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	test1[] = "abcde";
	char	test2[] = "ABCdefgh";
	char	test3[] = "abCdEfGhIjKLMNopqRsTuV";

	printf("%s\n", ft_strupcase(test1));
	printf("%s\n", ft_strupcase(test2));	
	printf("%s\n", ft_strupcase(test3));
	return 0;
}
*/
