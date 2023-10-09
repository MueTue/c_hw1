#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
   unsigned int i;
   i = 0;
   while(src[i] != '\0' && i < n)
   {
        dest[i] = src[i];
        i++;
   }
   
   while (i < n)
   {
    dest[i] = '\0';
    i++;
   }
   return dest;
   
}



int main()
{
    char string1[] = {"Monke"};
    char string2[] = {"Zebra"};


    ft_strncpy(&string1,&string2,3);

    printf(string1);

    
}
