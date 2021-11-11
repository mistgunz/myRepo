/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:06:13 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/02 17:12:44 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return 0;
	return 1;
}
#include <ctype.h>
#include <stdio.h>
int main()
{
	 char c;
	printf("%d", isascii(c));
	printf("%d", ft_isascii(c));
}
