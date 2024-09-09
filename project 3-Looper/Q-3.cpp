#include <stdio.h>

/*
Q.3 Digit Addition
    Develop a Program to find the sum of a number's first and last digits.
    Example:  
    Input: Enter any number: 384 
    Output: The sum of the first and the last digit: 7
*/

int main() {
	
    int number, lastDigit, firstDigit;

    printf("Enter any number: ");
    scanf("%d", &number);

 
    lastDigit = number % 10;

    firstDigit = number;
    
	while (firstDigit >= 10) 
        {firstDigit /= 10 ;
    }

    int sum = firstDigit + lastDigit;

  
    printf("The sum of the first and last digit: %d\n", sum);

    return 0;
    
}

