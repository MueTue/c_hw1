#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


void ft_putchar(char c)
{
 write(1,&c,1);
}

int main ()
{
    ft_putchar('k');
}