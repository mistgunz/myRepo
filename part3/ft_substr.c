#include <stdlib.h>

char* ft_substr(char const* s, unsigned int start , unsigned int len)
{
    int i ;
    int j ;
    char *str ;

    str = malloc(sizeof(*s) * (len + 1));
    if (!str)
        return(NULL);
    i = 0;
    j = 0;
    while(s[i])
    {
        if(i >= start && j < len)
        {
            str[j] = s[i] ;
            j++ ;
        }
        i++ ;
    }
    str[j] = 0 ;
    return (str); 
}
#include <stdio.h>
int main()
{
    char str[6] = "123456";
    printf("%s \n," , ft_substr(str,2,3));
}