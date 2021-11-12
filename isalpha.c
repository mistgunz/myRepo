
int ft_isalpha(int c)
{	
	if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return 0;
	return 1;
}
#include <stdio.h>
int main()
{
	char c = '5';
	printf("%d", ft_isalpha(c));
	return 0;
}
