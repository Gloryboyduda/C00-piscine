/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:16:53 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/01 15:27:45 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*lowercase(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i1;

	i = 0;
	i1 = 1;
	lowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i1 == 1)
			{
				str[i] = str[i] - 32;
			}
			i1 = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			i1 = 0;
		}
		else
			i1 = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	test1[] = "salut, comment tu vas ? 42mots quarante-deux;
       	cinquante+et+un";

	printf("%s", ft_strcapitalize(test1));
	return 0;
}
*/
