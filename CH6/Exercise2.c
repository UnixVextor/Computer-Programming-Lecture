/*
    จงเขียนโปรแกรมรับข้อความเข้ามาหนึ่งข้อความ แล้วนำมาแสดง
    ผลบรรทัดละ 10 ตัวอักษร

    Enter a sentence : You are the wind beneath my wings.

    Result :
    You are th
    e wind ben
    eath my wi
    ngs.
*/

#include <stdio.h>
int main(){
    char sentence[100];
    int c, i = 0;
    printf("Enter a sentence : ");
    scanf("%[^\n]s", sentence);
    for(c = 0; sentence[c] != '\0'; c++){
        printf("%c", sentence[c]);
        i = i + 1;
        if(i == 10){
            printf("\n");
            i = 0;
        }
    }   
    return 0;
}