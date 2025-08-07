// Conditions Class 

#include <stdio.h>

int main(){
    
    int a = 10; 
    if (a == 11){
        printf("Hello World!"); 
    }
    else if (a < 11){
        printf("Hello World!");
    }
    else{
        printf("Nothing"); 
    }
    
    //short hand 
    //variable = condition ? True : Flase ; 
    
    int b = 10 ; 
    (b < 11) ? printf("Hello World!") : printf("Nothing"); 
    
    
}

/* 
Assignment: 
1. Find out if a person is old enough to vote
2. Find out 10 is a positive number or negative number
3. Find out if a number is even or odd
4. Find out if a year is a leap year or not
*/

