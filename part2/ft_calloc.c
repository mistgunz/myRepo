#include <stdlib.h>
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



void *ft_calloc(unsigned int count , unsigned int size)
{
    void *s ;
    unsigned int cs ;
    
    cs = count * size ;
    s = (void*) malloc(cs); 
    if (!s)
        return (0) ;
    ft_bzero(s,count);
    return(s);
}
#include <stdio.h>

int main()
{
    printf("%s  \n",(char*)calloc(5,1));
    printf("%s  \n",(char*)ft_calloc(5,1));
}