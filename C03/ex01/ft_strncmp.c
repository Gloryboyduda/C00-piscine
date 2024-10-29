/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:54:56 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/07 17:24:54 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	test1[] = "abcde";
	char	test2[] = "abcde";
	char	test3[] = "abcdef";
	char	test4[] = "";

	printf("%d\n", ft_strncmp(test1, test2, n));
	printf("%d\n", strncmp(test1, test2, n));
	printf("%d\n", ft_strncmp(test1, test3, n));
	printf("%d\n", strncmp(test1, test3, n));
	return 0;
}
*/
