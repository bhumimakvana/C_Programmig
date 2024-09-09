#include<stdio.h>

// while loop

/*  
Q-4.
     Write a Program to print leap years between two given numbers using a while loop.
     For example,
     Input:
     Enter the first number: 2020
     nter the second number: 2040
     Output:
     2020, 2024, 2028, 2032, 2034, 2040
*/

main(){
	
	int first years,last years ;
	
	printf("Enter any number: ");
    scanf("%d", &n); 
    
	int number=n ;
	
	while (number >= 1){
		if(number%2 != 0){
		printf("%d", number);
		}
			number--;
			printf("\n");
	}
	
}
