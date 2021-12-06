

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
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

//done