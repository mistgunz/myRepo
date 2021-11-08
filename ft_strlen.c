int ft_strlen(const char* s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}

# include <string.h> 
int main()
{
    printf("%d \n",ft_strlen("") );
    printf("original : %d \n", strlen(""));
}