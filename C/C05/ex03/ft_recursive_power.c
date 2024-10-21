/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:58:22 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/05 15:43:10 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (result);
	if (power > 0)
	{
		result *= nb * ft_recursive_power(nb, power - 1);
		power--;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d",ft_recursive_power(10, 5));
	return (0);
}*/
