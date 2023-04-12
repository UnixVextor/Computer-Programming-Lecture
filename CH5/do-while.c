#include <stdio.h>
int main ( )
{
   int count = 1, sum = 0;            
   do {  
        sum = sum + count;
        count++; 
    } while ( count <= 50 );
    printf("%d", sum);
   return 0;
}
