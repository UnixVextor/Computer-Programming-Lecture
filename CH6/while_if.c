#include <stdio.h>
int main ( )
{
   int count = 0;
   printf ("Show even number from 0 to 100\n\n");
   while ( count <= 100 )
   { 
        if (count % 2  ==  0 )
             printf  ("%d " ,  count );
        count++;
   }
   return 0;
}