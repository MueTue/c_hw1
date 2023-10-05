#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>



void ft_print_numbers()
{
    for(int i = 0; i <= 9; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    ft_print_numbers();
}