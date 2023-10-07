#include <stdio.h>
#include <string.h>
#include <unistd.h>


ft_strcpy(char *dest[], char *src[])
{

*dest = *src;

}


int main()
{

char string1[] = "Monke";
char string2[] = "Zebra";



ft_strcpy(&string1,&string2);

   write(1,string1,sizeof(string1));
}