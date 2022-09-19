/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:18:18 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/19 17:46:57 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include	<stdio.h>

int		ft_str_is_alpha(char *str);

/*int main()
{
	char	str[] = "HasofelDKAS";
	printf("%d", ft_str_is_alpha(str));
	char	str1[] = "1234";
	printf("%d", ft_str_is_alpha(str1));
}*/

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		i++;
		else
			return (0);
	}
	return (1);
}
