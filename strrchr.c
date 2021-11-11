/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:55:43 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/02 18:02:45 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(char *str, char c)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
			break;
		i--;
	}
	if (i <= 0)
		return 0;
	return &str[i];
}
#include <stdio.h>
#include <string.h>
int main()
{
	char *c ="impliccit conversion is hard";
	printf("%s\n", ft_strrchr(c, 'z'));
	printf("%s", strrchr(c, 'z'));
}
