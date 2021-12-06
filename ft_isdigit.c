

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
	char c = '1';
	printf("%d\n", isdigit(c));
	printf("%d \n", ft_isdigit(c));
	return 0;
}
