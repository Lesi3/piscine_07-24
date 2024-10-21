/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:53:53 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/30 20:05:39 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (!*str)
		return (1);
	else
	{
		while (*str)
		{
			if (*str < 48 || *str > 57)
				return (0);
			str++;
		}
		return (1);
	}
}

/*int	main(void)
{
	char	str[] = "0909";
	char	str1[] = "09A";
	printf("\n%d", ft_str_is_numeric(str));
	printf("\n%d", ft_str_is_numeric(str1));
	return (0);
}*/
