/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:28:42 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/19 17:17:06 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include	<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

/*int	main()
{
	char src[] = "Hello";
	char dest[] = "World";
	printf("%d | %s  ", ft_strlcpy(dest, src, 5), dest);
	char src1[] = "Tudo";
	char dest1[] = "Bem";
	printf("%d | %s", ft_strlcpy(dest, src1, 3), dest);
}*/

int	ft_strlen(char *str)
{
	int		i;

		i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (n);
}
