
int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (*s1 == *s2 && n && s1 && s2)
	{
		s1++;
		s2++;
		n--;
	}
	return *s1 - *s2;
}
#include <stdio.h>
#include <string.h>
int main()
{
	char *c = "Hat";
	char *b = "Hatim";
	printf("%d\n", ft_strncmp(c, b, 4));
	printf("%d", strncmp(c, b, 4));

}
