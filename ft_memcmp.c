/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:41:48 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/03 16:16:50 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
	unsigned int i;
	unsigned char *c;
	unsigned char *b;

	c = (unsigned char *)str1;
	b = (unsigned char *)str2;

	i = 0;
	while (c[i]== b[i] && i < n)
	{
		i++;
	}
	return (c[i] - b[i]);
}
#include <stdio.h>
#include <string.h>

int main()
{
	char *c = "haTim";
	char *b = "hatim";
	printf("%d\n", ft_memcmp(c, b, 3));
	printf("%d", memcmp(c, b, 3));
}
