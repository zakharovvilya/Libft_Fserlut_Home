/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 02:04:55 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/16 04:36:05 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char*)s == (unsigned char)c)
			return ((unsigned char*)s);
		s++;
	}
	return (NULL);
}

int		main()
{
	int c;
	void *s;
	size_t n;

	c = '9';
	s = "Helloh,jhbhv7098776";
	n = 100;
	printf("My: %s\n", ft_memchr(s, c, n));
	printf("Sys: %s\n", memchr(s, c, n));
	return (0);
}
