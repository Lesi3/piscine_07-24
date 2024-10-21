/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:23:59 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/04 15:21:10 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_strlower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	abc;

	i = 0;
	abc = 1;
	ft_strlower(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (abc == 1)
				str[i] -= 32;
			abc = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			abc = 0;
		else
			abc = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "cinquante+et+un";
	char	str1[] = "cOMMENT tU VAS";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
	return (0);
}*/
