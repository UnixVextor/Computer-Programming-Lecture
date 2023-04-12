/*
   จงเขียนโปรแกรมแสดงรหัส ASCII ตั้งแต่ 33 ถึง 55
   
   Decimal      ASCII
     33          !
     34          "
     35          #
        ......
        ......
     55          7

*/
#include <stdio.h>
int main(){

    int i;
    printf("Decimal\t ASCI\n");
    for (i = 33; i <= 55; i++){
        printf("  %d\t   %c\n",i,i);
    }
    return 0;
}