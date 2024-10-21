/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:00:21 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/06 19:48:32 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	while (dest[i] != '\0')
		i++;
	a = 0;
	while (src[a] != '\0' && i < size - 1)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	a = 0;
	while (src[a] != '\0')
		a++;
	if (i + 1 > size)
		return (a +  1 + size);
	return (i + 1);
}

int	main(void)
{
	char	str[20] = "Hola que tal ";
	char	str1[] = "mundo";

	printf("%d", ft_strlcat(str, str1, 18));
	printf("\n%s", str);
	return (0);
}
