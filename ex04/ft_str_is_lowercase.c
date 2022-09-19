/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:12:21 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/19 18:03:30 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include	<stdio.h>

int	ft_str_is_lowercase(char *str);

/*int	main()
{
	printf("%d\n", ft_str_is_lowercase("hello"));
	printf("%d", ft_str_is_lowercase("1213"));
}*/

int	ft_str_is_lowercase(char *str)
{
	int		i;

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
