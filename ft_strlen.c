/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsi <thsi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 17:50:48 by thsi              #+#    #+#             */
/*   Updated: 2026/09/17 18:58:30 by thsi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <unistd.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	const char	*str = "Hello, World!";
// 	int			length;

// 	length = ft_strlen(str);
// 	write(1, &length, sizeof(length));
// 	return (0);
// }
