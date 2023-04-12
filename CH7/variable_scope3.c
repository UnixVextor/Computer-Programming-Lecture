#include <stdio.h>
void test(void);        /*Function Prototype*/
int main ( )
{
   int   num1;             // ตัวแปร num1 local ใน main ( )
   num1 = 19;            
   printf ("line1 (main) : num1 = %d\n",num1);
   test ( );
   printf ("line2 (main) : num1 = %d\n",num1);
   return 0;
}
void test()
{
     int num1;
     num1 = 26;      // Error
     printf ("line1 (test) : num1 = %d\n",num1);
}