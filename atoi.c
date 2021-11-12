int	ft_atoi(const char *str)
{
	int r;
	int s;
	
	r = 0;
	s = 1;
	 if (*str == '-' || *str == '+')
	 {
		if (*str == '-')
			s *= -1;
		str++;
	 }
	while (*str)
	{
		r = r * 10 + (*str - 48);
		str++;
	}
	return (r * s);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d\n", atoi("+12s478"));
	printf("%d", ft_atoi("+12s478"));
}
