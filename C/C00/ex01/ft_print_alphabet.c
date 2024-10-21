/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:00:52 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/29 15:35:07 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	abc;

	abc = 'a';
	while (abc <= 122)
	{
		write(1, &abc, 1);
		abc ++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
