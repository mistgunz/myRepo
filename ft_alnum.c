/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:48:37 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/02 17:01:20 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int an)
{
	if (!((an >= 48 && an <= 57) ||
			(an >= 65 && an <= 90) ||
			 (an >= 97 && an <= 122)))
		return 0;
	return 1;
}
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c = 'a';
	int a = c;
	printf("%d", a);
	printf("%d", ft_isalnum(c));
	printf("%d", isalnum(c));
}
