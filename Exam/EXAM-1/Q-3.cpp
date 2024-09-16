#include <stdio.h>

/*
	Problem 3: Control Structures (10 Marks)
	
	Write a C program that does the following:
	
	 1.Prompt the user to enter an integer value.
	 2.Use an if-else statement to check if the entered number is positive, negative, or zero and print the appropriate message.
	 3.Use a switch statement to display a message based on a number entered by the user 
	 (e.g., 1 for "Monday", 2 for "Tuesday", etc., up to 7 for "Sunday").
	
	Example Output:
	 Enter a number: -5 The number is negative.
	 Enter a number (1-7): 3 Wednesday
*/

int main() {  // Added int as the return type
	
    int num;
    
	// Prompt the user to enter an integer value
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    // Display a message based on the number entered
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid number. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;  // Added return statement for main()
}

 //summary 
 
/*
 The program prompts the user for a number, checks if it's positive, negative, or zero, and then uses a 
switch statement to display the corresponding day of the week based on a number from 1 to 7
*/
