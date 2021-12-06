#include <stdlib.h>
int	ft_strlen(const char *s)
{
	int	i = 0;
	while(s[i])
	{
		i++;
	}
	return i;
}

char * ft_strdup(const char *s)
{
 int i;
	char * s2; 
	int strlen ;
	

	i = 0 ;
	strlen = ft_strlen(s);
	s2 = (char*) malloc((strlen + 1) * sizeof(char)); 
	if (!s2)
		return (0) ;
	
	while (i < strlen)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = 0;
return(s2);
}


#include <string.h>
int main()
{
	char s1[6] = "abcdef";
	char s2[6] = "123x56";
	printf ("orgin : %s \n" ,strdup(s1) );
	printf ("ft : %s\n" ,ft_strdup(s1) );
}