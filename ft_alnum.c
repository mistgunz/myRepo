
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
