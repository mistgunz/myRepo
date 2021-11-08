void ft_bzero (void *s, unsigned int n)
{
    char *ss = s;
    unsigned int i = 0 ; 
    while (i < n)
    {
        ss[i] = 0 ; 
        i++ ;  
    }
}

#include <string.h>

int main()
{
    char s1[6]="abcdef";
    char s2[6] = "123456";
    bzero(s1,3);
    ft_bzero(s2,3);
    printf("original : %c \n",s1[3]);
    printf("ft : %c \n", s2[3]);
}