/*
    จงเขียนโปรแกรมหาพิ้นที่ของสามเหลี่ยมใด ๆ โดยรับค่าด้านทั้งสาม (a,b,c) ทาง
    แป้นพิมพ์ จากสูตร

        area = sqrt(s * (s-a) * (s-b) * (s-c))
           s = (a + b + c) / 2
        
*/
#include <stdio.h>
#include <math.h>
float area_trinagle(int a, int b, int c){
    float area = 0;
    float s = 0;
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    return area;
}
int main(){
    int a, b, c;
    float area;
    printf("Enter a number of triangle: ");
    scanf("%d %d %d", &a,&b,&c);
    area = area_trinagle(a,b,c);    
    printf("Area of triangel : %f", area);
    return 0;
}