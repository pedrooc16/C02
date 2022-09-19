/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:00:06 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/19 18:45:07 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include	<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

/*int	main()
{
	char src[] = "Hello";
	char dest[] = "Night123";
	printf("%s\n", ft_strncpy(dest, src, 5));
	

}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
