/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:21:19 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/31 12:23:05 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "abecedarios";
	char	str1[] = "AbeCEDARIOS";
	printf("%s", ft_strlowcase(str));
	printf("\n%s", ft_strlowcase(str1));
	return (0);
}*/
