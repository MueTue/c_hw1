#include <stdio.h>
#include <string.h>
#include <unistd.h>


char *ft_strupcase(char *str)
{
    int i;
    i = 0;
    
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    return str;
}

int main()
{

    char string1[] = {"Mon[ke"};

    printf(ft_strupcase(&string1));
}