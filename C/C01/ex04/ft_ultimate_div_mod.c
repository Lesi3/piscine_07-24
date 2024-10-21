/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:18:14 by ivillold          #+#    #+#             */
/*   Updated: 2024/05/29 18:20:36 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("%d%d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d%d", a, b);
	return (0);
}*/
