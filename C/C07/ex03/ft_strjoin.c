/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:46:10 by ivillold          #+#    #+#             */
/*   Updated: 2024/06/13 15:34:00 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	i;

	final_length = 0;
	i = 0;
	while (i < size)
	{
		final_length += ft_str_length(strings[i]);
		final_length += sep_length;
		i++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_l;
	int		i;
	char	*string;
	char	*destino;

	if (size == 0)
		return (malloc(sizeof(char)));
	total_l = ft_final_length(strs, size, ft_str_length(sep));
	destino = ((string = malloc((total_l + 1) * sizeof(char))));
	if (!destino)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(destino, strs[i]);
		destino += ft_str_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(destino, sep);
			destino += ft_str_length(sep);
		}
		i++;
	}
	*destino = '\0';
	return (string);
}

/*int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = malloc(3 * sizeof(char *));
	strs[0] = malloc(sizeof(char) * 5 + 1);
	strs[1] = malloc(sizeof(char) * 7 + 1);
	strs[2] = malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hola";
	strs[1] = "mundo";
	strs[2] = "que tal?";
	separator = ":)";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/
