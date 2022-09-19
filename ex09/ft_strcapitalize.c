/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:03:07 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/19 15:53:35 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include	<stdio.h>

char		*ft_strcapitalize(char *str);

/*int	main()
{
	char	str[] = "?Hello";
	char	str1[] = "42hello";
	char	sr2[] = "hello";
	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(sr2));
}*/

char	*ft_lowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		aux;

	i = 0;
	aux = 1;
	ft_lowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (aux == 1)
					str[i] -= 32;
				aux = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			aux = 0;
		else
		aux = 1;
		i++;
	}
	return (str);
}
