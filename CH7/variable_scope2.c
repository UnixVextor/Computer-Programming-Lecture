#include <stdio.h>
void test(void);        /*Function Prototype*/
int main ( )
{
   int   num1;             // ตัวแปร local num1 ใน main ( )
   num1 = 19;            
   printf ("line1 (main) : num1 = %d\n",num1);
   test ( );
   printf ("line2 (main) : num1 = %d\n",num1);
   return 0;
}
void test()
{
     int num1;           //  ตัวแปร local num1 ใน test ( )
     num1 = 26;          
     printf ("line1 (test) : num1 = %d\n",num1);
}