#include <stdio.h>

/*
	Q1: Basic Data Types and Variables (10 Marks)
	
	Write a C program that performs the following tasks:
	
	 1.Declare variables of different data types (int, float, double, char) and initialize them with appropriate values.
	 2.Print the value of each variable along with its data type.
	 3.Demonstrate the use of constants by defining some constants and using them in expressions.
	 4.Show how the size of different data types can be displayed using sizeof().
	
	Example Output:
	 Integer: 10
	 Float: 20.5
	 Double: 30.555
	 Character: A    
	 Size of int: 4 bytes
	 Size of float: 4 bytes
	 Size of double: 8 bytes
	 Size of char: 1 byte
*/

#include <stdio.h>

int main() {
	
    // Declare and initialize variables of different data types
    int I = 10;
    float F = 20.5;
    double D = 30.555;
    char C = 'A';
    
    // Print values and data types
    printf("Integer: %d\n", I);
    printf("Float: %.1f\n", F);
    printf("Double: %.3f\n", D);
    printf("Char: %c\n", C);
    
    // Display the size of different data types using sizeof()
    printf("\nSize of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}


 //summary 
 
/*
   The program declares and initializes variables of different data types (int, float, double, char), 
 prints their values, and uses sizeof() to display the memory size of each type.
*/
