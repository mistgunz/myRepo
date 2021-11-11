/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:54:55 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/03 17:57:02 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return c + 32;
	return c;
}
#include <ctype.h>
#include <stdio.h>
int main()
{
	int i;
	i = 0;
	while (i <= 127)
	{
		printf("%c %c\n", ft_tolower(i), tolower(i));
		i++;
	}
}
