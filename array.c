#include <stdio.h>

int main(){
    
    // Array - How to declear 
    int my_array[] = {20, 30, 40 , 50} ;
    
    // Change an array element 
    my_array[2] = 70; 
    
    // loop in array 
    for(int i = 0; i < 4 ; i++ ){
        printf("%d\n", my_array[i]);
    }
    
    // printf("%d", my_array[2]) ; 
}