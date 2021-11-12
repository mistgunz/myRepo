

int	ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
	unsigned int i;
	unsigned char *c;
	unsigned char *b;

	c = (unsigned char *)str1;
	b = (unsigned char *)str2;

	i = 0;
	while (c[i]== b[i] && i < n)
	{
		i++;
	}
	return (c[i] - b[i]);
}
#include <stdio.h>
#include <string.h>

int main()
{
	char *c = "haTim";
	char *b = "hatim";
	printf("%d\n", ft_memcmp(c, b, 3));
	printf("%d", memcmp(c, b, 3));
}
