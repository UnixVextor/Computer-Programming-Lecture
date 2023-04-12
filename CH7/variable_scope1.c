#include <stdio.h>
int      num1;           // ตัวแปร num1 เป็น global 
void test(void);        /*Function Prototype*/
int main ( )
{
   num1 = 19;            // ไม่มีการประกาศตัวแปร
   printf ("line1 (main) : num1 = %d\n",num1);
   test ( );
   printf ("line2 (main) : num1 = %d\n",num1);
   return 0;
}
void test()
{
     num1 = 26;          // ไม่มีการประกาศตัวแปร
     printf ("line1 (test) : num1 = %d\n",num1);
}