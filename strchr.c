/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:42:19 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/02 17:54:18 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(char *str, char c)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			break;
		i++;
	}
	if (str[i] == '\0')
		return 0;
	return &str[i];
}
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n", ft_strchr("impliccit conversion is hard", 'z'));
	printf("%s", strchr("impliccit conversion is hard", 'z'));

}
