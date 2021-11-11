/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:17:00 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/03 19:03:53 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	unsigned int i;
   	unsigned int j;

	i = 0;
	if (*s2 == '\0')
		return (char *)s1;
	while (*s1 && i < n)
	{
		j = 0;
		while (*(s1 + j) == *(s2 + j))
		{
			j++;
			if (*(s2 + j) == '\0')
				return ((char*)s1);

		}
		s1++;
		i++;
	}	
	return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
	const char *c = "no such file or directory";
	const char *b = "or";

	printf("%s\n", strnstr(c, b, 5));
	printf("%s", ft_strnstr(c, b, 5));
}
