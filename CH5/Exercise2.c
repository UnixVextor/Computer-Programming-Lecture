/*
    จงเขียนโปรแกรมรับตัวเลขเพื่อมาคำนวณหาผลบวกกำลังสองจนกระทั่งตัวเลข
    ที่รับเข้ามามีค่าเป็น 0
        Enter a number : 2
        Enter a number : -5
        Enter a number : 0
        Result : 29
*/

#include <stdio.h>
int main(){
    int result = 0;
    int number = 1;
    while(number != 0){
        printf("Enter a number : ");
        scanf("%d", &number);
        result = result + (number * number);
    }
    printf("Result : %d", result);
    return 0;
}