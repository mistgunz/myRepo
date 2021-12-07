int ft_strlen(const char* s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}

#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
    int totlen ;
    char *str ;
    int i ;
    int j ;
    totlen = ft_strlen(s1) + ft_strlen(s2) ;
    
    str = malloc(sizeof(*s1) * (totlen + 1));
    if(!str)
        return(NULL);
    i = 0 ;
    j = 0 ;
    while (i < ft_strlen(s1))
    {
        str[i] = s1[i];
        i++;
    }
    while (i >= ft_strlen(s1) && i < totlen)
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = 0 ; 
    return(str);
}

int main()
{
    char s1[] = "xx123";
    char s2[] = "456xx";

    printf("%s \n", ft_strjoin(s1,s2));
}

//deep 