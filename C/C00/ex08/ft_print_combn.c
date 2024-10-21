/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:04:54 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/13 11:47:45 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_number(int *aux, int nb)
{
	int	i;
	int	cond;

	cond = 1;
	i = 1;
	while (i < nb)
	{
		if (aux[i - 1] >= aux[i])
			cond = 0;
		i++;
	}
	if (cond)
	{
		i = 0;
		while (i < nb)
		{
			ft_putchar(aux[i] + 48);
			i++;
		}
		if (aux[0] < (10 - nb))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int nb)
{
	int	i;
	int	aux[10];

	if (nb > 10 || nb < 1)
		return ;
	i = 0;
	while (i < nb)
		aux[i++] = 0;
	while (aux[0] <= (10 - nb) && nb >= 1 && nb < 10)
	{
		print_number(aux, nb);
		aux[nb - 1]++;
		i = nb - 1;
		while (i && nb > 1)
		{
			if (aux[i] > 9)
			{
				aux[i - 1]++;
				aux[i] = 0;
			}
			i--;
		}
	}
}

/*int	main(void)
{
	ft_print_combn(12);
	return (0);
}*/
