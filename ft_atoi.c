int	ft_atoi(const char *str)
{
	int r;
	int s;
	int i;

	i = 0;
	r = 0;
	s = 1;
	 if (str[i] == '-' || str[i] == '+')
	 {
		if (str[i] == '-')
			s *= -1;
		i++;
	 }
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (r * s);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[9] = "+12s478";
	printf("%d\n", atoi("-2147483648"));
	printf("%d \n", ft_atoi("-2147483648"));
}

//done