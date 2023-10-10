#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    bool isWord = false;

    if(str[i] != 32 && str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] -= 32;
        i++;
    }
    
    while(str[i])
    {
        isWord = true;
        if(str[i -1] >= 'a' && str[i -1] <= 'z' || str[i -1] >= 'A' && str[i -1] <= 'Z' || str[i -1] >= '1' && str[i -1] <= '9')
        {
            isWord = false;
        }
    
        if(isWord)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
        else
        {
            if(str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] += 32;
        }
        }
        i++;
    }
    return str;
}

int main()
{

char string1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

printf("%s", ft_strcapitalize(&string1));

}