#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i,j;
   char *s[] = 
   {
      "Git tutorials",
      "WebMagic Informatica"
   };
   j=0;

   for (i = 0; i < 3; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}