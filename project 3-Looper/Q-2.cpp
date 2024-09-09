#include <stdio.h>

/*
Q.2 Digit Counter
    Develop a Program to count the total number of digits in a number.
    Example:
    Input: Enter any number: 752
*/

int main() {
	
    int number, count = 0;

    printf("Enter any number: ");
    scanf("%d", &number);

    do {
        count++;            
        number /= 10;       
       } 
	while (number != 0); 

    printf("Total number of digits: %d\n", count);
    
    return 0;
    
}

