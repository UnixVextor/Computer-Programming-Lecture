#include <stdio.h>
void show_star (int);
int main ( ) { 
    int num = 9; 
    show_star(num); 
    printf ("\n* kmitl *\n");
    show_star (num);                                           
    return 0; 
}
void show_star (int n) { 
    int i; 
    for (i = 1; i <= n; i++)
       printf ("*"); 
} 
