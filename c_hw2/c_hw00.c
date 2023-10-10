#include <stdio.h>
#include <string.h>
#include <unistd.h>


char ft_strcpy(char *dest, char *src)
{
   int i = 0;

   while (src[i])
   {
      dest[i] = src[i];

      i++;
   }

   dest[i] = '\0';

   return dest;
}


int main()
{

   char string1[] = "Monke";
   char string2[] = "Zebra";

   ft_strcpy(&string1,&string2);

   printf(string1);
}
