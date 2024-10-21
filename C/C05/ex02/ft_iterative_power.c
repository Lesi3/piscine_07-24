/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:51:14 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/05 15:42:02 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (result);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d",ft_iterative_power(10, 2));
	return (0);
}*/
