/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:05:05 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/29 18:21:08 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[6] = {7, 2, 4, 6, 3, 1};
	int	size;

	size = 6;
	printf("%d%d%d%d%d%d%c",tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], '\n');
	ft_sort_int_tab(tab, size);
	printf("%d%d%d%d%d%d",tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/
