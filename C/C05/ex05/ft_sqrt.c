/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:26:51 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/05 15:37:50 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		i = 2;
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
		return (0);
	}
}

/*int	main(void)
{
	printf("%d",ft_sqrt(100));
	return (0);
}*/
