/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:11:09 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/30 20:12:47 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (!*str)
		return (1);
	else
	{
		while (*str)
		{
			if (*str < 65 || *str > 90)
				return (0);
			str++;
		}
		return (1);
	}
}

/*int	main(void)
{
	char	str[] = "AGSGXx";
	char	str1[] = "";
	printf("\n%d", ft_str_is_uppercase(str));
	printf("\n%d", ft_str_is_uppercase(str1));
	return (0);
}*/
