#include<stdio.h>

// while loop

/*  
Q-4. Write a Program to print odd numbers from N to 1 using a while loop.
     For example,
     Input:
     Enter any number: 15
     Output:
     15 13 11 9 7 5 3 1
*/

main(){
	
	int n ;
	
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
