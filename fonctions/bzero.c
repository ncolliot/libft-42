#include <string.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    if(i < n)
        return;
    while(i < n)
    {
        *(char*)(s + i) = 0;
        i++;
    }
}

int main()
{
    char str[50] = "This is for the test!";
    
    bzero(str, 4);
    return (0);
}