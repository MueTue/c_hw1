#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


void ft_print_alphabet()
{
    
    for(char alphabet = 122; alphabet >= 97; alphabet--)
    {
        printf("%c ", alphabet);
    }
}



int main()
{
   ft_print_alphabet();
}