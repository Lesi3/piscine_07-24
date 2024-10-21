/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:17:24 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/04 14:53:29 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_isprintable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (ft_char_isprintable(src[i]))
			ft_putchar(src[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[src[i] / 16]);
			ft_putchar("0123456789abcdef"[src[i] % 16]);
		}
		i++;
	}
}

/*int	main(void)
{
    char	src[] = "Coucou\ntu vas bien ?";
    //char	dest[20] = "";
    ft_putstr_non_printable(src);
   // printf("\n%s",dest);
    return (0);
}*/
