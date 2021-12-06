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
    bzero(s1,0);
    ft_bzero(s2,0);
    printf("original : %s \n",(char*)s1);
    printf("ft : %s \n", (char*)s2);
}