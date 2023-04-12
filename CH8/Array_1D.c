  #include <stdio.h>
  int main ( ) { 
    int number[3] = {23, -186, 43}; 
    float value_2[5]={0.98,43.213,-3.47,52.08,-0.987};              
    char vowel[5] = { 'a', 'e', 'i', 'o', 'u' };  
    char vowel2[6] = "aeiou"; 
    char name[9] = { 'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', '\0'}; 
    printf ( "%s\n" , vowel );       
    printf ( "%c\n" , vowel[0] );
    printf ( "%d\n" , number[1] );
    printf ( "%f\n" ,  value_2[2] ); 
    return 0; 
  }