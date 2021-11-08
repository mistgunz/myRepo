void *ft_memset(void *s,int c,int n)
{   char *ss = s;
    int i = 0;
    while(i < n)
    {
        ss[i] = c;
        i++;
    }
    return ((void*) ss);
}

#include <string.h>
int main()
{
    char s[5];
    char d[5];
    printf("%s \n" , (char*)ft_memset(s,'f',3));
    printf("%s \n",(char*)memset(d,'f',3));
    printf("\n");
}