/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:15:13 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/01 12:25:21 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (!*str)
		return (1);
	else
	{
		while (*str)
		{
			if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
				return (0);
			str++;
		}
		return (1);
	}
}

/*int	main(void)
{
	char	str[] = "AZaz";
	char	str1[] = "A-z";
	printf("\n%d", ft_str_is_alpha(str));
	printf("\n%d", ft_str_is_alpha(str1));
	return (0);
}*/
