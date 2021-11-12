
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
