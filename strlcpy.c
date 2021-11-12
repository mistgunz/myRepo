

long unsigned int ft_strlcpy(char *dst, const char *src, unsigned int len)
{
	unsigned int l;
	unsigned int i;
	i = 0;
	while (i < len - 1)
	{
		if (*src != '\0')
			*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return i + 1;
}
#include <string.h>
#include <stdio.h>
int main()
{
	
	char c[5] = "hatim";
	char b[5] = "strin";
	printf("%lu ", ft_strlcpy(b, c, 5));
	printf("%s\n", b);
	char i[5] = "hatim";
   	char j[5] = "strin";	
	printf("%lu ", strlcpy(j, i, 5));
	printf("%s", j);
	return 0;

}
