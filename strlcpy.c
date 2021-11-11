/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:11:23 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/04 19:55:05 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long unsigned int ft_strlcpy(char *dst, const char *src, unsigned int len)
{
	unsigned int l;
	unsigned int i;
	i = 0;
	while (i < len - 1)
	{
		if (*src != '\0')
			*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return i + 1;
}
#include <string.h>
#include <stdio.h>
int main()
{
	
	char c[5] = "hatim";
	char b[5] = "strin";
	printf("%lu ", ft_strlcpy(b, c, 5));
	printf("%s\n", b);
	char i[5] = "hatim";
   	char j[5] = "strin";	
	printf("%lu ", strlcpy(j, i, 5));
	printf("%s", j);
	return 0;

}
