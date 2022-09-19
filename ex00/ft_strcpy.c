/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:49:48 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/19 17:33:49 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

/*int	main()
{
	char scr[] = "ola, tudo bem?";
	char destino[] = "bom dia";
	ft_strcpy(destino, scr);
	int	i = 0;
	while(destino[i] != '\0')
			{
	 write(1, &destino[i], 1);
	 	i++;
}
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
