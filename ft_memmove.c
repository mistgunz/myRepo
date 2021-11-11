/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:20:33 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/04 18:05:56 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dst, const void *src, unsigned int n)
{
	unsigned int i;
	unsigned char *c;
	unsigned char *l;
	unsigned char *t;
	unsigned char *k;
	c = (unsigned char *)dst;
	l = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		t[i] = *l++;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*c++ = t[i];
		i++;
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
	char c[5] = "hatim";
	memmove(c + 2, c, 2);
	printf("%s\n", c);
	char b[5] = "hatim";
	ft_memmove(b + 2, b, 3);
	printf("%s", b);
}
