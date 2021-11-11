/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:42:44 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/03 17:54:35 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
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
		printf("%c %c\n", ft_toupper(i), toupper(i));
		i++;
	}
}	
