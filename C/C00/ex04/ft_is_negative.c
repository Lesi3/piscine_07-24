/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:39:08 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/29 15:33:32 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
		result = 'N';
	else
		result = 'P';
	write(1, &result, 1);
}

/*int	main(void)
{
	ft_is_negative(4);
	return (0);
}*/
