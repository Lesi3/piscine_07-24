/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:03:20 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/13 17:20:47 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	*d;
	int	lenght;

	if (min >= max)
		return (0);
	lenght = max - min;
	d = ((arr = malloc(lenght * sizeof(int))));
	if (!d)
		return (0);
	i = 0;
	while (i < lenght)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/*int		main(void)
{
	int	*tab;
	int	i = 0;
	int	size;

	size = 10;
	tab = ft_range(5, 15);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
