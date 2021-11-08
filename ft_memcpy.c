void * ft_memcpy(void *dest , const void *src, unsigned int n)
{
    unsigned char *dest2 = dest ;
    unsigned char *src2 = (unsigned char*) src;
    unsigned int i = 0;
    while (i < n)
    {
        dest2[i] = src2[i];
        i++;
    }
    return ((void*)dest2);
}

#include <string.h>
int main()
{
    char s1[6] = "abcdef";
    char s2[6] = "123456";
    //printf("original : %s \n", (char*)memcpy(s2,s1,3));
    printf("ft : %s \n", (char*)ft_memcpy(s2,s1,3));
}
