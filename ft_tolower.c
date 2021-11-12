

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
