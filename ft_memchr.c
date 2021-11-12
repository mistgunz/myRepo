
void	*ft_memchr(const void *str, int c, unsigned int n)
{
	unsigned int i;
	unsigned char *l;

	l = (unsigned char *)str;
	i = 0;
	while (l[i])
	{
		if (l[i] == (unsigned char)c)
			break;
		i++;
	}
	return (&l[i]);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char *c = "Undefined symbols for architecture";
	char *b = "Undefined symbols for architecture";

	printf("%s\n", memchr(c, 's', 34));
	printf("%s", ft_memchr(b, 's', 34));
}
