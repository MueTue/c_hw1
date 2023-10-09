#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


void ft_is_negative(int n)
{
    if(n >= 0)
    {
        printf("P");
    }
    else
    {
        printf("N");
    }
}



int main()
{
    ft_is_negative(-1);
}