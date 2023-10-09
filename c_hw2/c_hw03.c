#include <stdio.h>
#include <string.h>
#include <unistd.h>



int ft_str_is_numeric(char *str)
{
    if(str == NULL)
    {
    return 1;
    }
    int i;
    i = 0;

    while(str[i])
    {
        if(str[i] >= 0 && str[i] <= 9)
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

char string1[] = {"1234"};

printf("%d", ft_str_is_numeric(&string1) );

}


