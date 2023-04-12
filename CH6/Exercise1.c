/*
    จงเขียนโปรแกรม รับตัวเลข 1 2 3 เข้ามา 
    ถ้ารับเป็นเลข 1 ให้พิมพ์คำว่า Hello
    ถ้ารับเป็นเลข 2 ให้พิมพ์ว่า Thank you 
    ถ้ารับเป็นเลข 3 ให้พิมพ์ว่า Good bye
    ถ้าเป็นเลขอื่นให้พิมพ์ว่า Sorry แล้วออกจากโปรแกรม

    Enter a number : 1
    Hello

    Enter a number : 2
    Thank you

    Enter a number : 9
    Sorry
*/

#include <stdio.h>
int main(){
    
    int number;
    while (1){
        printf("Enter a number : ");
        scanf("%d", &number);

        if(number == 1){
            printf("Hello\n");
        }
        else if (number == 2){
            printf("Thank you\n");
        }else{
            printf("Sorry\n");
            break;
        }
    }

    return 0;    
}