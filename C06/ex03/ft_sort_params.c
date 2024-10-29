/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:36:21 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/09 20:59:24 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		print(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort(int ac, char **av)
{
	int		j;
	char	*temp;

	j = 1;
	while (j <= ac)
	{
		while (j < ac -1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		j = 1;
		ac--;
	}
	return (av);
}

int	main(int ac, char **av)
{
	int	j;

	j = 1;
	while (j < ac)
	{
		ft_sort(ac, av);
		ft_putstr(av[j]);
		ft_putstr("\n");
		j++;
	}
	return (0);
}
