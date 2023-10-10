#include <stdio.h>
#include <string.h>
#include <unistd.h>



 int ft_str_is_printable(char *str)
 {
    int i = 0;

    while(str[i])
    {
        if(str[i] >= '1' && str[i] <= 177)
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

char string1[] = "Monekf̷̬̣͓̭̦͚̤̹̭̗̥̞̗͔̹̈̈́̂͗̈́͋̏̀̎́̿̍̆̓̿̏͒̄̎̕͝d̵̡̳̱̱̥̯̣̻͎̝̻͉̎̓̀̈̋̓̑͊̆̄̈͝f̸͖̹͚͎̭̯̲͓͉̹̯̞͚̪̖̳̰̳͕͚͈̞̥̝͎͉̆̈̑͂";




printf("%d", ft_str_is_printable(&string1));

}