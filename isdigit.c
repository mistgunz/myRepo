

int ft_isdigit(int d)
{
	if (!(d >= 48 && d <= 57))
			return 0;
	return 1;		
}
#include <ctype.h>
#include <stdio.h>
int main()
{
	char c = '@';
	printf("%d\n", isdigit(c));
	printf("%d", ft_isdigit(c));
	return 0;
}
