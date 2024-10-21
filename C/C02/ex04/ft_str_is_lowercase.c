/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:06:56 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/30 20:08:49 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (!*str)
		return (1);
	else
	{
		while (*str)
		{
			if (*str < 97 || *str > 122)
				return (0);
			str++;
		}
		return (1);
	}
}

/*int	main(void)
{
	char	str[] = "apxc z";
	char	str1[] = "mcjhba";
	printf("\n%d", ft_str_is_lowercase(str));
	printf("\n%d", ft_str_is_lowercase(str1));
	return (0);
}*/
