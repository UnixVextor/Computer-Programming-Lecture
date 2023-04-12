  #include <stdio.h>
  int main ( ) { 
    int number[2][3] = { 23, -186, 43,
                                       11, 128, 300 };              
    char name[2][20] = { "Computer",
                         "Programmming"};   
  
    printf ( "%d\n" ,  number[0][2] );
    printf ( "%d\n" ,  number[1][2] );
    printf ( "%s\n" ,   name[0] );
    printf ( "%c\n" ,   name[1][3] ); 
    return 0; 
  }