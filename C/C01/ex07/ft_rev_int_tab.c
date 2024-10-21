/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:25:13 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/29 18:21:01 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}
}

/*int	main(void)
{
	int	tab[6] = {1, 2, 3, 4, 5, 6};
	int	size;

	size = 6;
	printf("%d%d%d%d%d%d",tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_rev_int_tab(tab, size);
	printf("%d%d%d%d%d%d",tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/
