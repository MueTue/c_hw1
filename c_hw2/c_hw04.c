#include <stdio.h>
#include <string.h>
#include <unistd.h>


int ft_str_is_lowercase(char *str)
{
    if(str == NULL)
    {
        return 1;
    }
    int i;
    i = 0;

    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            i++;
        }
        else
        {
        return 0;
        }
    }
    return 1;
}

int main()
{

char string1[] = "monke";

printf("%d", ft_str_is_lowercase(&string1) );

}

