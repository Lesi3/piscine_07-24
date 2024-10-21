/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:13:29 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/31 12:00:37 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (!*str)
		return (1);
	else
	{
		while (*str)
		{
			if (*str < 32 || *str > 126)
				return (0);
			str++;
		}
		return (1);
	}
}

/*int	main(void)
{
	char	str[] = "!g,sopnp7asdyf87asdg~";
	char	str1[] = " ";
	printf("\n%d", ft_str_is_printable(str));
	printf("\n%d", ft_str_is_printable(str1));
	return (0);
}*/
