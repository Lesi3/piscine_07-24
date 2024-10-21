/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:42:01 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/06 17:13:48 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

int	check_error_base(char *base)
{
	int	len_base;
	int	index;
	int	index2;

	index = 0;
	len_base = ft_strlen(base);
	if (len_base <= 1)
		return (1);
	while (base[index] != '\0')
	{
		if (base[index] == '+' || base[index] == '-')
			return (1);
		index2 = index + 1;
		while (base[index2] != '\0')
		{
			if (base[index] == base[index2])
				return (1);
			index2++;
		}
		index++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len_base;
	unsigned int	n;

	if (check_error_base(base) == 0)
	{
		len_base = ft_strlen(base);
		if (nbr < 0)
		{
			ft_putchar('-');
			n = nbr * -1;
		}
		else
			n = nbr;
		if (n / len_base > 0)
		{
			ft_putnbr_base((n / len_base), base);
		}
		ft_putchar(base[n % len_base]);
	}
}

/*int	main(void)
{
	int	num;
	char	base[] = "0123456789";
	num = 2147483647;
	ft_putnbr_base(num, base);
}*/
