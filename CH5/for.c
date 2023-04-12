#include <stdio.h>
int main ( )
{
   int sum = 0, count; 
   for ( count = 1 ; count <= 50 ; count++) { 
      sum = sum + count ; 
    } 
   printf ( "Summation of 1 to 50 = %d" , sum );
   return 0;
}
