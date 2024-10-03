#include <stdio.h>

/*
	Problem 5: Combined Application (10 Marks)

	Write a C program that combines multiple concepts:
	
	 1.Prompt the user to enter a number (n) for the size of a table.
	 2.Use a for loop to generate a multiplication table for numbers from 1 to n.
	 3.Inside the loop, use a control structure to format the output properly.
	 4.Use constants for table size and formatting strings.
	
	Example Output:
	 Enter the size of the table: 5
	 Multiplication Table: 1 x 1 = 1 1 x 2 = 2 1 x 3 = 3 1 x 4 = 4 1 x 5 = 5 ...
*/

main() {
	
    int n;

// Prompt the user to enter the size of the table
    
    printf("Enter the size of the table (1 to 100): ");
    scanf("%d", &n);

// Validate the input
    
    if (n < 1 || n > 100) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

// Print the multiplication table
    
    printf("\nMultiplication Table:\n");
    
    for (int i = 1; i <= n; i++) {
        for (int f = 1; f <= n; f++) {
            // formatting strings
            printf("%d x %d = %d\n", i, f, i * f);
        }
        printf("\n"); // Newline for better readability between rows
    }

}
//summary 
 
/*
For loop: Prints the first 10 natural numbers.
While loop: Computes and prints the factorial of a user-provided number.
Do-while loop: Displays a menu and runs until the user selects "Exit."
The added int main() and return 0; ensure proper function definition and termination
*/
